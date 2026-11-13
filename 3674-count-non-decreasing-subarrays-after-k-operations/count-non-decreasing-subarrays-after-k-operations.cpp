
class Solution {
public:
    long long countNonDecreasingSubarrays(vector<int>& nums, int k) {
        int n = nums.size();

        // Prefix sum
        vector<long long> pref(n + 1, 0);

        for (int i = 0; i < n; i++) {
            pref[i + 1] = pref[i] + nums[i];
        }

        // Next Greater Element
        vector<int> nge(n, n);
        stack<int> st;

        for (int i = n - 1; i >= 0; i--) {
            while (!st.empty() && nums[st.top()] <= nums[i]) {
                st.pop();
            }

            if (!st.empty()) {
                nge[i] = st.top();
            }

            st.push(i);
        }

        // Binary Lifting
        int LOG = 1;
        while ((1 << LOG) <= n) {
            LOG++;
        }

        vector<vector<int>> up(LOG, vector<int>(n + 1, n));
        vector<vector<long long>> sum(LOG, vector<long long>(n + 1, 0));

        // First level
        for (int i = 0; i < n; i++) {
            up[0][i] = nge[i];

            sum[0][i] =
                1LL * nums[i] * (nge[i] - i)
                - (pref[nge[i]] - pref[i]);
        }

        // Build binary lifting tables
        for (int j = 1; j < LOG; j++) {
            for (int i = 0; i < n; i++) {
                int mid = up[j - 1][i];

                up[j][i] = up[j - 1][mid];

                sum[j][i] =
                    sum[j - 1][i] + sum[j - 1][mid];
            }
        }

        // Calculate minimum operations for [l, r]
        auto getCost = [&](int l, int r) -> long long {
            int curr = l;
            long long cost = 0;

            // Jump over complete blocks
            for (int j = LOG - 1; j >= 0; j--) {
                int next = up[j][curr];

                if (next <= r) {
                    cost += sum[j][curr];
                    curr = next;
                }
            }

            // Remaining partial block
            cost += 1LL * nums[curr] * (r - curr + 1)
                    - (pref[r + 1] - pref[curr]);

            return cost;
        };

        // Sliding Window
        long long ans = 0;
        int left = 0;

        for (int right = 0; right < n; right++) {

            while (left <= right && getCost(left, right) > k) {
                left++;
            }

            ans += right - left + 1;
        }

        return ans;
    }
};

class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        int n = nums.size();

        // number -> number of size-k subarrays containing it
        unordered_map<int, int> mp;

        // Generate every subarray of size k
        for (int i = 0; i <= n - k; i++) {
            unordered_set<int> seen;

            for (int j = i; j < i + k; j++) {
                seen.insert(nums[j]);
            }

            // Each number is counted only once for this subarray
            for (int x : seen) {
                mp[x]++;
            }
        }

        int ans = -1;

        for (auto &[num, count] : mp) {
            if (count == 1) {
                ans = max(ans, num);
            }
        }

        return ans;
    }
};
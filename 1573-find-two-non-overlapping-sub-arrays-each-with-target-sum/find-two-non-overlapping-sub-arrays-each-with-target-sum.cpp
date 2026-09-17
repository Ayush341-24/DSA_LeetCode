class Solution {
public:
    int minSumOfLengths(vector<int>& arr, int target) {
        int n = arr.size();
        
        int sum = 0;
        int left = 0;
        int ans = INT_MAX;

        // dp[i] = shortest valid subarray ending at or before i
        vector<int> dp(n, INT_MAX);

        for (int right = 0; right < n; right++) {
            sum += arr[right];

            // Shrink window if sum becomes greater than target
            while (sum > target) {
                sum -= arr[left];
                left++;
            }

            // Carry previous best answer
            if (right > 0) {
                dp[right] = dp[right - 1];
            }

            // Found a subarray with sum = target
            if (sum == target) {
                int len = right - left + 1;

                // Need another subarray completely before 'left'
                if (left > 0 && dp[left - 1] != INT_MAX) {
                    ans = min(ans, len + dp[left - 1]);
                }

                // Update shortest valid subarray
                dp[right] = min(dp[right], len);
            }
        }

        return ans == INT_MAX ? -1 : ans;
    }
};
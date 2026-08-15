class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int n = nums.size();
        int ans = 0;
        bool allZero = true;

        for(int &val : nums){
            ans = (ans ^ val);

            if(val != 0){
                allZero = false;
            }
        }

        if(allZero){
            return 0;
        }

        return (ans == 0) ? n-1 : n;
    }
};
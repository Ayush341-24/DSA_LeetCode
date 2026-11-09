class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
        int ans = nums[0];
        for(int val : nums){
            if(abs(ans) > abs(val)){
                ans = val;
            }
            else if(abs(ans) == abs(val)){
                ans = max(ans , val);
            }
        }
        return ans;
    }
};
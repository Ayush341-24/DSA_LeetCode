class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n,0);
        int st_pos = 0;
        int st_neg = 1;
        for(int i=0; i<n; i++){
            if(nums[i] > 0){
                ans[st_pos] = nums[i];
                st_pos += 2;
            }
            else{
                ans[st_neg] = nums[i];
                st_neg += 2;
            }
        }
        return ans;
    }
};
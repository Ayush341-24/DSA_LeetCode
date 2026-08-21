class Solution {
public:
    bool check(vector<int>& nums) {
        int n = nums.size();
        bool flag = true;
        int count = 0;
        for(int i=0; i<n-1; i++){
            if(nums[i] > nums[i+1]){
                count = i+1;
                flag = false;
                break;
            }
        }
        if(flag){
            return true;
        }
        vector<int> ans(n,0);
        for(int i=0; i<n; i++){
            ans[i] = nums[(i+count) % n];
        }
        for(int i=0; i<n-1; i++){
            if(ans[i] > ans[i+1]){
                return false;
            }
        }
        return true;
    }
};
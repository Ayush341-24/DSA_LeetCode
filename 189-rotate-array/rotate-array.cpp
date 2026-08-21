class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        int count = n - (k % n);
        vector<int> ans(n , 0);
        for(int i=0; i<n; i++){
            ans[i] = nums[(i+count) % n];
        }
        for(int i=0; i<n; i++){
            nums[i] = ans[i];
        }
    }
};
class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();
        int ans = INT_MAX;
        bool flag = false;
        for(int i=0; i<n; i++){
            auto _max = max_element(nums.begin() , nums.end() -n + i);
            auto _min = min_element(nums.begin()+i , nums.end());
            int val = *_max - *_min;
            if(val <= k){
                flag = true;
                ans = min(ans, i);
            }
        }
        if(flag){
            return ans;
        }
        return -1;
    }
};
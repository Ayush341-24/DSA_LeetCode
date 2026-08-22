class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int _max = INT_MIN;
        int n = nums.size();
        int _curr = 0;
        for(int i=0; i<n; i++){
            _curr += nums[i];
            _max = max(_max , _curr);
            if(_curr < 0){
                _curr = 0;
            }
        }
        return _max;
    }
};
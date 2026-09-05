class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();
        int _min = INT_MAX;
        vector<int> _minele(n);
        for(int i=n-1; i>=0; i--){
            _min = min(_min , nums[i]);
            _minele[i] = _min;
        }

        int _max = INT_MIN;
        for(int i=0; i<n; i++){
            _max = max(_max , nums[i]);
            if(_max - _minele[i] <= k){
                return i;
            }
        }
        return -1;
    }
};
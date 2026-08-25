class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        int n = nums.size();
        for(int i=1; i<=n+1; i++){
            auto val = find(nums.begin() , nums.end() , k * i);
            if(val == nums.end()){
                return k*i;
            }
        }
        return 1;
    }
};
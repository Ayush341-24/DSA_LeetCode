class Solution {
public:
    int missingInteger(vector<int>& nums) {
        int n = nums.size();
        int val = nums[0];
        for(int i=1; i<n; i++){
            if(nums[i] == nums[i-1]+1){
                val += nums[i];
            }
            else{
                break;
            }
        }
        set<int> unique(nums.begin() , nums.end());
        while(true){
            if(unique.find(val) == unique.end()){
                return val;
            }
            val++;
        }
        return 0;
    }
};
class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int , int> mp;
        for(int val : nums){
            mp[val]++;
        }
        for(int i=1; i<=101; i++){
            if(mp.find(k * i) == mp.end()){
                return k*i;
            }
        }
        return 1;
    }
};
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        int count = 0;
        int curr_sum = 0;
        unordered_map<int , int> mp;
        mp.insert({0,1});
        for(int i=0; i<n; i++){
            curr_sum += nums[i];
            if(mp.find(curr_sum - k) != mp.end()){
                count += mp[curr_sum - k];
            }
            mp[curr_sum]++;
        }
        return count;
    }
};
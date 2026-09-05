class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int , int> sample; // value / count;
        unordered_map<int , int> maxCount;
        int _count = 1;
        for(int i=0; i<n-1; i++){
            sample[nums[i]]++;
            if(nums[i] == nums[i+1]){
                _count++;
            }
            else{
                maxCount[nums[i]] = max(maxCount[nums[i]] , _count);
                _count = 1;
            }
        }
        sample[nums[n-1]]++;
        maxCount[nums[n-1]] = max(maxCount[nums[n-1]] , _count);
        unordered_set<int> unique (nums.begin() , nums.end());
        int ans = 0;
        for(int val : unique){
            if(sample[val] == maxCount[val]){
                ans++;
            }
        }
        return ans;
    }
};
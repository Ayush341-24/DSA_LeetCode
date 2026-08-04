class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin() , nums.end());
        vector<int> ans;
        if( n == (nums[n-1]-nums[0]+1)){
            return ans;
        }
        set<int> unique;
        unique.insert(nums.begin() , nums.end());
        for(int i=nums[0]; i<nums[n-1]; i++){
            if(unique.find(i) == unique.end()){
                ans.push_back(i);
            }
        }
        return ans;
    }
};
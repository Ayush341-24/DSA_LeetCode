class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        vector<int> ans;
        sort(nums.begin() , nums.end());
        int st = nums[0];
        int end = nums.back();
        set<int> unique(nums.begin() , nums.end());
        for(int i=st+1 ; i<=end-1; i++){
            if(unique.count(i) == 0){
                ans.push_back(i);
            }
        }
        return ans;
    }
};
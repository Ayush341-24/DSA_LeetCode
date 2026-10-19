class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        vector<int> ans;
        int count = 0;
        for(int val : nums){
            if(val < target){
                count++;
            }
        }

        for(int val : nums){
            if(val == target){
                ans.push_back(count);
                count++;
            }
        }
        return ans;
    }
};
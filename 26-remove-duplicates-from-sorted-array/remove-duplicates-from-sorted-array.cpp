class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        unordered_set<int> unique;
        int _count = 0;
        vector<int> ans;
        for(int val : nums){
            if(unique.find(val) == unique.end()){
                unique.insert(val);
                ans.push_back(val);
                
            }
        }
        nums = ans;
        return ans.size();
    }
};
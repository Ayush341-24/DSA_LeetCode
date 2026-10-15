class Solution {
public:
    int sumCounts(vector<int>& nums) {
        int n = nums.size();
        int sum = 0;
        for(int i=0; i<n; i++){
            for(int j=i; j<n; j++){
                unordered_set<int> unique;
                for(int k=i; k<=j; k++){
                    unique.insert(nums[k]);
                }
                sum += (unique.size() * unique.size());
                unique.clear();
            }
        }
        return sum;
    }
};
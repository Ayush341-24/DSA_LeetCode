class Solution {
public:
    int minMoves2(vector<int>& nums) {
        int n = nums.size();
        int sum = 0;
        int st = 0 , end = n-1;
        int mid = st + (end-st)/2;
        sort(nums.begin(),nums.end());
        for(int i=0; i<n; i++){
            sum += abs(nums[i] - nums[mid]);
        }
        return sum;
    }
};
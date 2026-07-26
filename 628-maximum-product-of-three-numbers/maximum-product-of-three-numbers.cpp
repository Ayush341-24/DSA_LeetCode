class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.rbegin() , nums.rend());
        int st = 0 , end = nums.size() - 1;
        int a = nums[st] * nums[st + 1] * nums[st + 2];
        int b = nums[st] * nums[end] * nums[end - 1];
        return max(a,b);
    }
};
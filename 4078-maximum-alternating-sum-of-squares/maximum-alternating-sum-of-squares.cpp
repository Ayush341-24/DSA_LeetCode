class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        int n = nums.size();
        for(int i=0; i<n; i++){
            nums[i] = abs(nums[i]);
        }
        sort(nums.begin() , nums.end());
        int st = 0 , end = n-1;
        long long sum = 0;
        while(st <= end){
            if(st == end){
                sum += nums[st] * nums[st];
            }
            else{
            sum += (nums[end] * nums[end] - nums[st] * nums[st]);
            }
            st++;
            end--;
        }
        return sum;
    }
};
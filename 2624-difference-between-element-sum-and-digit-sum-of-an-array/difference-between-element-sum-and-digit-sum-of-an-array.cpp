class Solution {
public:
    int digitsum(int n){
        int sum = 0;
        while(n){
            int _rem = n % 10;
            sum += _rem;
            n = n/10;
        }
        return sum;
    }
    int differenceOfSum(vector<int>& nums) {
        int sum = 0;
        int digits= 0;
        for(int i=0; i<nums.size(); i++){
            sum += nums[i];
            digits += digitsum(nums[i]);
        }
        return abs(sum - digits);   
    }
};
class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n = nums.size();
        long long sum = 0;
        int count = 0;
        long long _max1 = INT_MIN;
        for(int i=0; i<n; i++){
            sum += nums[i];
            count++;
            if(count == k){
                _max1 = max(_max1 , sum);
                sum -= nums[i-k+1];
                count--;
            }
        }
        return (double)_max1 / k;
    }
};
class Solution {
public:
    int maxLength(vector<int>& nums) {
        int n = nums.size();
        int ans = 1;
        for(int i=0; i<n; i++){
            long long pro = nums[i];
            long long _gcd = nums[i];
            long long lcm = nums[i];
            for(int j=i+1; j<n; j++){
                pro *= nums[j];
                _gcd = gcd(_gcd , 1LL * nums[j]);
                lcm =  (lcm / gcd(lcm , 1LL * nums[j])) * nums[j];
                if(pro == lcm * _gcd){
                ans = max(ans , j-i+1);
                }
                else if(pro > lcm * _gcd){
                    break;
                }
            }
        }
        return ans;
    }
};
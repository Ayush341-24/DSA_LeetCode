#define ll long long
class Solution {
public:
    long long countCommas(long long n) {
       ll start = 1000;
       ll ans = 0;
       while(start <= n){
            ans += (n - start + 1);
            start *= 1000;
       }
       return ans; 
    }
};
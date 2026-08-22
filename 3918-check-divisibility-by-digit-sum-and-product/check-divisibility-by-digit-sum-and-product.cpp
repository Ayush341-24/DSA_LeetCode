class Solution {
public:
    bool checkDivisibility(int n) {
        int sum = 0;
        int pro = 1;
        int val = n;
        while(val){
            int _rem = val % 10;
            sum += _rem;
            pro *= _rem;
            val = val/10;
        }
        if((n % (sum + pro)) == 0){
            return true;
        }
        return false;
    }
};
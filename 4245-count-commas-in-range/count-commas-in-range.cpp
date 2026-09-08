class Solution {
public:
    int countCommas(int n) {
        int count = 0;
        int val = n;
        while(n){
            count++;
            n = n/10;
        }
        int tens = pow(10,count-1);
        if(count < 4){
            return 0;
        }

        return (val - 999) ; 
    }
};
class Solution {
public:
    int addDigits(int num) {
        int sum = 0;
        while(num){
            int _rem = num % 10;
            sum += _rem;
            num = num / 10;
        }
        if(sum < 10){
            return sum;
        }
        return addDigits(sum);
    }
};
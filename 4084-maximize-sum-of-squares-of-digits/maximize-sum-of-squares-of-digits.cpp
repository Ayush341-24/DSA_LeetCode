class Solution {
public:
    string maxSumOfSquares(int num, int sum) {
        if(sum > num * 9){
            return "";
        }
        string ans = "";
        while(num--){
            if(sum > 9){
                ans += '9';
                sum -= 9;
            }
            else if(sum > 0 && sum <= 9){
                ans += to_string(sum);
                sum = 0;
            }
            else{
                ans += '0';
            }
        }
        return ans;
    }
};
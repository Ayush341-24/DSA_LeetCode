class Solution {
public:
    int minimumPushes(string word) {
        int n = word.size();
        if(n <= 8){
            return n;
        }
        else if(n > 8 && n <= 16){
            return 8 + 2 * abs(n-8);
        }
        else if(n > 16 && n <= 24){
            return 24 + 3 * abs(n-16);
        }
        else{
            return 48 + 4*abs(n-24);
        }
        return 0;
    }
};
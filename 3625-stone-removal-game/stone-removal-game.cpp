class Solution {
public:
    bool canAliceWin(int n) {
        int count = 1;  // Alice
        int sub = 10;
        if(n < sub){
            return false;
        }
        while(n){
            if(n >= sub){
                n -= sub;
                count++;
                sub--;
            }
            else{
                break;
            }
        }
        if(count % 2 != 0){
            return false;
        }
        return true;
    }
};
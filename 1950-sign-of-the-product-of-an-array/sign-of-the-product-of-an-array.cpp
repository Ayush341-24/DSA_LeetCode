class Solution {
public:
    int arraySign(vector<int>& nums) {
        int pro = 1;
        for(int val : nums){
            pro *= val;
            if(pro > 0){
                pro = 1;
            }
            else if(pro < 0){
                pro = -1;
            }
            else{
                pro = 0;
                break;
            }
        }
        if(pro > 0){
            return 1;
        }
        else if(pro < 0){
            return -1;
        }
        return 0;
    }
};
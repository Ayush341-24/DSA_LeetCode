class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int sum_single = 0;
        int sum_notsingle = 0;
        for(int val : nums){
            if(val < 10){
                sum_single += val;
            }
            else{
                sum_notsingle += val;
            }
        }
        if(sum_single == sum_notsingle){
            return false;
        }
        return true;
    }
};
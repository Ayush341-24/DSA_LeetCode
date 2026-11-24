class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        int count = 1;
        int i = 0 , j = 1;
        while(j<n){
            if(nums[i] == nums[j]){
                if(count < 2){
                    i++;
                    nums[i] = nums[j];
                    count++;
                }
            }
            else{
                i++;
                nums[i] = nums[j];
                count = 1;
            }
            j++;
        }
        return i+1;
    }
};
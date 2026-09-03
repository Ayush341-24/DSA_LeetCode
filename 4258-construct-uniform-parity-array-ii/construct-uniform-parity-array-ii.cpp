class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int _min = *min_element(nums1.begin() , nums1.end());

        if(_min % 2 == 1){
            return true;
        }

        for(int val : nums1){
            if(val % 2 == 1){
                return false;
            }
        }
        
        return true;
    }
};
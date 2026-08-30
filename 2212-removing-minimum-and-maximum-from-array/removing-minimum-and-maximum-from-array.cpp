class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n = nums.size();
        if(n == 1 || n == 2){
            return n;
        }
        int min_idx = 0;
        int max_idx = 0;
        int _min = INT_MAX;
        int _max = INT_MIN;
        for(int i=0; i<n; i++){
            if(nums[i] > _max){
                _max = nums[i];
                max_idx = i;
            }
            if(nums[i] < _min){
                _min = nums[i];
                min_idx = i;
            }
        }
        int a = min_idx + 1;
        int b = max_idx + 1;
        int sum = min(a , n-a+1) + min(b , n-b+1);
        int m = max(a,b);
        int mini = min(a,b);
        int p = min(m , n-mini+1);
        return min(sum , p);
    }
};
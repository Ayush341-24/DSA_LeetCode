class Solution {
public:
    bool isPalindrome(long long n) {
        long long val = n;
        long long sum = 0;

        while (n) {
            int _rem = n % 10;
            sum = 10 * sum + _rem;
            n = n / 10;
        }

        return val == sum;
    }

    long long minimumCost(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        int st = 0, end = nums.size() - 1;
        int mid = st + (end - st) / 2;

        long long low = nums[mid];
        long long high = nums[mid];

        while (low >= 0 && !isPalindrome(low)) {
            low--;
        }

        while (!isPalindrome(high)) {
            high++;
        }

        long long sum1 = 0, sum2 = 0;

        for (int i = 0; i < nums.size(); i++) {
            sum1 += abs((long long)nums[i] - low);
            sum2 += abs((long long)nums[i] - high);
        }

        return min(sum1, sum2);
    }
};
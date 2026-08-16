#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool stoneGameIX(vector<int>& stones) {
        int cnt[3] = {0};

        // Count stones based on remainder when divided by 3
        for (int x : stones) {
            cnt[x % 3]++;
        }

        // If number of stones divisible by 3 is even
        if (cnt[0] % 2 == 0) {
            return cnt[1] > 0 && cnt[2] > 0;
        }

        // If number of stones divisible by 3 is odd
        return abs(cnt[1] - cnt[2]) > 2;
    }
};
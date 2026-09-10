class Solution {
public:
    int characterReplacement(string s, int k) {
        int n = s.size();

        int count = 0;
        int left = 0;
        int maxFreq = 0;

        vector<int> freq(26 , 0);
        for(int right = 0; right < n; right++){
            freq[s[right] - 'A']++;

            maxFreq = max(maxFreq , freq[s[right] - 'A']);

            int changes = (right - left + 1) - maxFreq;

            while(changes > k){
                freq[s[left] - 'A']--;
                left++;

                changes = (right - left + 1) - maxFreq;
            }

            count = max(count , right - left + 1);
        }
        return count;
    }
};
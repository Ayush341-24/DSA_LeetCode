class Solution {
public:
    int lengthOfLastWord(string s) {
        int count = 0;
        int ans = 0;
        for(int i=0; i<s.size(); i++){
            if(isalpha(s[i])){
                count++;
                ans = count;
            }
            else{
                count = 0;
            }
        }
        return ans;
    }
};
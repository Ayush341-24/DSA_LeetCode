class Solution {
public:
    bool palindrome(string s){
        int st = 0 , end = s.size()-1;
        while(st <= end){
            if(s[st] != s[end]){
                return false;
            }
            st++;
            end--;
        }
        return true;
    }
    string firstPalindrome(vector<string>& words) {
        int n = words.size();
        for(int i=0; i<n; i++){
            if(palindrome(words[i])){
                return words[i];
            }
        }
        return "";
    }
};
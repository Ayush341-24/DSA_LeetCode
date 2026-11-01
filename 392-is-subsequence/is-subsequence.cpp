class Solution {
public:
    bool isSubsequence(string s, string t) {
        if(s == t){
            return true;
        }
        int st = 0;
        for(int i=0; i<t.size(); i++){
            if(s[st] == t[i]){
                st++;
            }
            if(st == s.size()){
                return true;
            }
        }
        return false;
    }
};
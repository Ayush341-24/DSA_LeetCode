class Solution {
public:
    string minRemoveToMakeValid(string s){
        string ans = "";
        int count = 0;
        for(int i=0; i<s.size(); i++){
            if(s[i] == '('){
                count++;
            }
            else if(s[i] == ')'){
                if(count == 0){
                    continue;
                }
                count--;
            }
            ans += s[i];
        }
        string res = "";
        count = 0;
        for(int i=ans.size()-1; i>=0; i--){
            if(ans[i] == ')'){
                count++;
            }
            else if(ans[i] == '('){
                if(count == 0){
                    continue;
                }
                count--;
            }
            res += ans[i];
        }
        reverse(res.begin(),res.end());
        return res;
    }
};
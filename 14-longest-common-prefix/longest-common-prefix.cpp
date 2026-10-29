class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n = strs.size();
        if(n == 1){
            return strs[0];
        }
        sort(strs.begin() , strs.end());
        string common = "";
        int a = strs[0].size();
        int b = strs[n-1].size();
        for(int i=0; i<min(a,b); i++){
            if(strs[0][i] == strs[n-1][i]){
                common += strs[0][i];
            }
            else{
                break;
            }
        }
        return common;
    }
};
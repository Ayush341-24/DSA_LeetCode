class Solution {
public:
    int longestValidParentheses(string s) {
        int count = 0 , open = 0 , close = 0 ;
        int ans1 = 0;
        for(int i=0; i<s.size(); i++){
            if(s[i] == '('){
                open++;
                count++;
            }
            else{
                close++;
                count--;
            }
            if(count < 0){
                count = 0;
                open = 0;
                close = 0;
            }
            if(open == close){
                ans1 = max(ans1 , open + close);
            }
        }

        open = 0 , close = 0 , count = 0;
        int ans2 = 0;
        for(int i=s.size()-1; i>=0; i--){
            if(s[i] == ')'){
                open++;
                count++;
            }
            else{
                close++;
                count--;
            }
            if(count < 0){
                count = 0;
                open = 0;
                close = 0;
            }
            if(open == close){
                ans2 = max(ans2 , open + close);
            }
        }
        return max(ans1 , ans2);
    }
};
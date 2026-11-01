class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<char , string> mp1;
        unordered_map<string , char> mp2;
        vector<string> words;
        string word = "";
        for(int i=0; i<s.size(); i++){
            if(s[i] == ' '){
                words.push_back(word);
                word = "";
            }
            else{
                word += s[i];
            }
        }
        words.push_back(word);
        if(words.size() != pattern.size()){
            return false;
        }
        for(int i=0; i<words.size(); i++){
            if(!mp1.count(pattern[i]) && !mp2.count(words[i])){
                mp1[pattern[i]] = words[i];
                mp2[words[i]] = pattern[i];
            }
            else if(mp1.count(pattern[i]) || mp2.count(words[i])){
                if(mp1[pattern[i]] != words[i] || mp2[words[i]] != pattern[i]){
                    return false;
                }
                else{
                    mp1[pattern[i]] = words[i];
                    mp2[words[i]] = pattern[i];
                }
            }
        }
        return true;
    }
};
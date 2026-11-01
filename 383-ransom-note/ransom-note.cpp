class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char , int> mp1;
        unordered_map<char , int> mp2;
        int n = ransomNote.size();
        int m = magazine.size();
        for(int i=0; i<n; i++){
            mp1[ransomNote[i]]++;
        }
        for(int i=0; i<m; i++){
            mp2[magazine[i]]++;
        }
        for(int i=0; i<n; i++){
            if(!mp2.count(ransomNote[i])){
                return false;
            }
            if(mp1[ransomNote[i]] > mp2[ransomNote[i]]){
                return false;
            }
        }
    return true; 
    }
};
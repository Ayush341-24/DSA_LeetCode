class Solution {
public:
    int totalNumbers(vector<int>& digits) {
        vector<int> mp;
        vector<int> count(10 , 0);

        for(int val : digits){
            count[val]++;
        }

        for(int i=1; i<=9; i++){
            if(count[i] == 0)continue;
            count[i]--;
            for(int j=0; j<=9; j++){
                if(count[j] == 0)continue;
                count[j]--;
                for(int k=0; k<=8; k+=2){
                    if(count[k] == 0)continue;
                    count[k]--;

                    int digit = 100 * i + 10 * j + k;
                    mp.push_back(digit);
                    count[k]++;
                }
                count[j]++;
            }
            count[i]++;   
        }
        return mp.size();
    }
};
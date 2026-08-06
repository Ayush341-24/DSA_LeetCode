class Solution {
public:
    int smallestNumber(int n, int t) {
        while(true){
            int val = n;
            int pro = 1;
            while(val){
                int _rem = val % 10;
                pro *= _rem;
                val = val / 10;
            }
            if(pro % t == 0){
                return n;
            }
            n++;
        }
        return 0;
    }
};
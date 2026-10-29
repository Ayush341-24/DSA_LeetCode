class Solution {
public:

    int nextNumber(int n){
        int sum = 0;
        while(n){
            int _rem = n % 10;
            sum += (_rem * _rem);
            n = n / 10;
        }
        return sum;
    }

    bool isHappy(int n) {
        
        unordered_set<int> unique;
        while(n != 1 && unique.find(n) == unique.end()){
            unique.insert(n);
            n = nextNumber(n);
        }

        return n == 1;
    }
};
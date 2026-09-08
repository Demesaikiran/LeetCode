class Solution {
public:
    int countCommas(int n) {
        int count = 0;

        if(n < 1000) return 0;
        if(n == 100000) return 99001;

        else return (((n/1000)-1) * 1000) + (n % 1000) + 1;
    }
};
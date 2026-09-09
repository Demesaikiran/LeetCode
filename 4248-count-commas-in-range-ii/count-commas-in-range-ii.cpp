class Solution {
public:
    long long countCommas(long long n) {
        long long total = 0;
        long long low = 1;      
        int d = 1;

        while (low <= n) {
            long long high = min(n, low * 10 - 1);
            long long count = high - low + 1;
            long long commasPerNum = (d - 1) / 3;
            total += count * commasPerNum;

            if (low > n / 10) break;
            low *= 10;
            d++;
        }
        return total;
    }
};
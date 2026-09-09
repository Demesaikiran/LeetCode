class Solution {
public:
    long long countCommas(long long n) {
        long long total = 0;
        for (long long p = 1000; p <= n; p *= 1000) {
            total += n - p + 1;
        }
        return total;
    }
};
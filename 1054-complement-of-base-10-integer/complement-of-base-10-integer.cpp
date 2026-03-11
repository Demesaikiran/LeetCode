class Solution {
public:
    int bitwiseComplement(int n) {
        if(n == 0) return 1;

        int n_bits = log2(n) + 1;
        int mask = (1 << n_bits) - 1;

        return n ^ mask;
    }
};
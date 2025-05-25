class Solution {
public:
    int longestPalindrome(vector<string>& words) {
        unordered_map<string, int> cnt;
        int result = 0, middle = 0;

        for (auto& w : words) cnt[w]++;
        for (auto& [key, value] : cnt)
        {
            string rk = key;
            reverse(rk.begin(), rk.end());
            if (key[0] == key[1]) 
            {
                middle += value & 1;
                result += value / 2 * 2 * 2;
            } 
            else if (cnt.count(rk)) 
            {
                result += min(value, cnt[rk]) * 2;
            }
        }
        result += middle ? 2 : 0;
        return result;
    }
};
class Solution {
public:
    int numberOfSubstrings(string s) {
        unordered_map<char, int> abc_count;

        int trav = 0;
        long long result = 0;

        for(char temp : s)
        {
            abc_count[temp]++;

            while(abc_count.size() == 3)
            {
                char rem_char = s[trav++];

                if(--abc_count[rem_char] == 0)
                    abc_count.erase(rem_char);
            }
            result += trav;
        }
        return result;
    }
};
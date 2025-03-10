class Solution {
public:
    bool is_vowel(char character)
    {
        if(character == 'a' || character == 'e' || character == 'i' ||
            character == 'o' || character == 'u')
            return true;
        return false;
    }

    long long count_SubStringsWithK(string word, int k)
    {
        unordered_map<char, int> vowel_count;

        int conso_count = 0, trav = 0;
        long long result = 0;

        for(char temp : word)
        {
            if(is_vowel(temp))
                vowel_count[temp]++;
            else
                conso_count++;

            while(conso_count >= k and vowel_count.size() == 5)
            {
                char rem_char = word[trav++];

                if(is_vowel(rem_char))
                {
                    if(--vowel_count[rem_char] == 0)
                        vowel_count.erase(rem_char);
                }
                else
                    conso_count--;
            }
            result += trav;
        }
        return result;
    }

    long long countOfSubstrings(string word, int k) 
    {
        return count_SubStringsWithK(word, k) - count_SubStringsWithK(word, k + 1);
    }
};
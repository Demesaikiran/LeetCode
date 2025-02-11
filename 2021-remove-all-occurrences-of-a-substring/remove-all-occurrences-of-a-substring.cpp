class Solution {
public:
    string removeOccurrences(string s, string part) {
        int n = part.size();

        while (s.find(part) != -1) 
        {
            s = s.erase(s.find(part), n);
        }

        return s;

    }
};
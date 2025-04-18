class Solution {
public:
    string countAndSay(int n) {
        string res = "1";

        while (--n) 
        {
            string temp = "";

            for (int i = 0; i < res.size();) 
            {
                int j = i;
                while (j < res.size() && res[j] == res[i]) ++j;
                temp += to_string(j - i);
                temp += res[i];
                i = j;
            }

            res = temp;
        }
        return res;
    }
};
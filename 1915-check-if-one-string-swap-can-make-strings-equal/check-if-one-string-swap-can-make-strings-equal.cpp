class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        char a, b, c, d;

        int n = s1.size();
        int flag = 0;

        for(int i = 0; i < n; i++)
        {
            if(s1[i] != s2[i])
            {
                if(flag == 0)
                {
                    a = s1[i];
                    b = s2[i];
                    flag++;
                }
                else if(flag == 1)
                {
                    c = s1[i];
                    d = s2[i];
                    flag++;
                }
                else return false;
            }
        }

        if(flag == 0) return true;

        return (flag == 1) or (a != d or b != c) ? false : true;
    }
};
class Solution {
public:

    vector<vector<int>> lcs(string& a, string& b)
    {
        int alen = a.length();
        int blen = b.length();

        vector<vector<int>> dp(alen + 1, vector<int>(blen + 1, 0));

        for(int i = 1; i <= alen; i++)
        {
            for(int j = 1; j <= blen; j++)
            {
                if(a[i - 1] == b[j - 1])
                    dp[i][j] = dp[i - 1][j - 1] + 1;
                else
                    dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);

            }
        }

        return dp;

    }
    string shortestCommonSupersequence(string str1, string str2) {
        string result;

        vector<vector<int>> dp = lcs(str1, str2);

        int i = str1.length(), j = str2.length();

        while(i > 0 or j > 0)
        {
            if(i == 0)
                result += str2[--j];

            else if(j == 0)
                result += str1[--i];

            else
            {
                if(dp[i][j] == dp[i - 1][j])
                    result += str1[--i];
                
                else if(dp[i][j] == dp[i][j - 1])
                    result += str2[--j];
                
                else
                {
                    result += str1[--i]; --j;
                }

            }
        }

        reverse(result.begin(), result.end());

        return result;
    }

    
};
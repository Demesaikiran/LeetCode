class Solution {
public:
    int uniquePaths(int m, int n) {
        vector<vector<int>> buffer(m, vector<int> (n));
        
        for(int i = 0; i < m; i++)
            buffer[i][0] = 1;
        
        for(int i = 0; i < n; i++)
            buffer[0][i] = 1;
        
        for(int i = 1; i < m; i++)
            for(int j = 1; j < n; j++)
                buffer[i][j] = buffer[i - 1][j] + buffer[i][j - 1];
        
        
        return buffer[m - 1][n  - 1];
    }
};
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n_rows = matrix.size();
        int n_cols = matrix[0].size();
        
        vector < int > row(n_rows, -1), col(n_cols, -1);
        
        for( int i = 0; i < n_rows; i++)
        {
            for(int j = 0; j < n_cols; j++)
            {
                if(matrix[i][j] == 0)
                {
                    row[i] = 0;
                    col[j] = 0;
                }
            }
        }
        
        for( int i = 0; i < n_rows; i++)
        {
            for( int j = 0; j < n_cols; j++)
            {
                if(row[i] == 0 || col[j] == 0)
                    matrix[i][j] = 0;
            }
        }
    }
};
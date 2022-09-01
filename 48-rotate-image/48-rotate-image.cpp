class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int rows = matrix.size(), cols = matrix[0].size();
        
        for(int i = 0; i < rows; i ++)
        {
            for(int j = 0; j < i; j++)
            {
                int temp = matrix[i][j];
                matrix[i][j] = matrix[j][i];
                matrix[j][i] = temp;
            }
        }
        
        for(int i = 0; i < rows; i ++)
        {
            for(int j = 0, k = rows -1; j < k; j++, k--)
            {
               int temp = matrix[i][j];
                matrix[i][j] = matrix[i][k];
                matrix[i][k] = temp;
                
            }
        }
        
        
    }
};
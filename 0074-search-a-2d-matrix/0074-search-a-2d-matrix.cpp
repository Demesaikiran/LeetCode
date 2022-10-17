class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rownum = -1;
        int m = matrix.size();
        int n = matrix[0].size();
                
        for(int i = 0; i < m; i++)
        {
            if(target <= matrix[i][n - 1])
            {
                rownum = i;
                break;
            }
        }
        
        if(rownum == -1)
            return false;
        
        if(binary_search(matrix[rownum].begin(), matrix[rownum].end(), target))
            return true;
        else
            return false;
    }
};
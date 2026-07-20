class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int m = grid.size();
        int n = grid[0].size();

        int total = m * n;
        k %= total;

        vector<vector<int>> result(m, vector<int>(n));

        for(int i = 0; i < m; i++)
        {
            for(int j = 0; j < n; j++)
            {
                int old_index = i * n + j;
                int new_index = (old_index + k) % total;

                int x = new_index / n;
                int y = new_index % n;

                result[x][y] = grid[i][j];
            }
        }

        return result;
    }
};
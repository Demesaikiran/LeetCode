class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        
        unordered_map<int, int> hash;
        int duplicate = 0;
        int given_sum = 0;

        int n = grid[0].size();

        int n2_sum = ((n* n) * ((n*n) + 1)) /2 ;

        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < n; j++)
            {
                given_sum += grid[i][j];

                if(duplicate == 0)
                    if(hash.count(grid[i][j])) 
                        duplicate = grid[i][j];
                    else
                        hash[grid[i][j]] = 1;

            }
        }

        int missing = n2_sum - given_sum + duplicate;

        return {duplicate, missing};
    }
};
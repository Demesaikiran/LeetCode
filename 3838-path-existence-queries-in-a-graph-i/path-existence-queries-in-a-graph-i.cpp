class Solution {
public:
    vector<bool> pathExistenceQueries(int n, vector<int>& nums, int maxDiff, vector<vector<int>>& queries) {
        int components = 0;
        vector<int> component(n, 0);

        for(int i = 1; i < n; i++)
        {
            if(nums[i] - nums[i - 1] > maxDiff)
                components++;
            
            component[i] = components;
        }

        vector<bool> result;

        for(auto &iter : queries)
        {
            result.push_back(component[iter[0]] == component[iter[1]]);
        }

        return result;
    }
};
class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {
        vector<vector<int>> res;
        int temp[1001]{};

        for (auto& x : nums1) 
        {
            temp[x[0]] += x[1];
        }

        for (auto& x : nums2) 
        {
            temp[x[0]] += x[1];
        }

        for (int i = 0; i < 1001; i++) 
        {
            if (temp[i])
                res.push_back({i, temp[i]});
        }

        return res;
    }
};
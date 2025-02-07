class Solution {
public:
    vector<int> queryResults(int limit, vector<vector<int>>& queries) {
        int n = queries.size();
        unordered_map<int, int> color, colorCount;
        vector<int> ans;
        for(int i = 0; i < n; i++)
        {
            int pos = queries[i][0];
            int ncolor = queries[i][1];
            if(color.find(pos) != color.end())
            {
                int temp = color[pos];
                colorCount[temp]--;
                if(colorCount[temp] == 0) 
                    colorCount.erase(temp);
            }
            colorCount[ncolor]++;
            color[pos] = ncolor;
            ans.push_back(colorCount.size());
        }
        return ans;
    }
};
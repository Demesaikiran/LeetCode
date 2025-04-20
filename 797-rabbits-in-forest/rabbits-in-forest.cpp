class Solution {
public:
    int numRabbits(vector<int>& answers) {
        unordered_map<int, int> cnt;
        for (int x : answers) ++cnt[x];
        int res = 0;
        
        for (auto& [x, v] : cnt) 
        {
            int group = x + 1;
            res += (v + group - 1) / group * group;
        }
        return res;
    }
};
class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int n = fruits.size();
        unordered_map<int, int> fruit_count;
        int x = 0, maxTrees = 0;

        for (int i = 0; i < n; ++i) 
        {
            fruit_count[fruits[i]]++;
            while (fruit_count.size() > 2) 
            {
                fruit_count[fruits[x]]--;
                if (fruit_count[fruits[x]] == 0)
                    fruit_count.erase(fruits[x]);
                x++;
            }

            maxTrees = max(maxTrees, i - x + 1);
        }

        return maxTrees;
    }
};
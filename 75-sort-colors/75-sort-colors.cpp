class Solution {
public:
    void sortColors(vector<int>& nums) {
        
        vector<pair<int ,int>> colors = {{0, 0}, {1, 0}, {2, 0}};
        int index = 0;
        
        for(auto i: nums)
            (colors[i].second)++;
        
        for(int i = 0; i < 3; i++)
            for(int j = 0; j < colors[i].second; j++)
                nums[index++] = i;
        
    }
};
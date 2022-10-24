class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        sort(nums.begin(), nums.end(), greater<int>());
        
        int max_perim = 0;
        
        for(int i = 0; i < nums.size() - 2; i ++)
        {
            if(nums[i] < nums[i + 1] + nums[i + 2])
            {
                max_perim = max(max_perim, nums[i] + nums[i + 1] + nums[i + 2]);
                break;
            }
        }
        
        return max_perim == 0 ? 0 : max_perim;
    }
};
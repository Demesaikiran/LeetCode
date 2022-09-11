class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        int max = INT_MIN, sum_array = 0, index = 0;
        
        for(int i = 0; i < nums.size(); i++)
        {
            sum_array += nums[i];
            
            if(sum_array > max)
                max = sum_array;
            
            if(sum_array < 0)
            {
                sum_array = 0;
                index++;
            }
        }
        
        return max;
    }
};
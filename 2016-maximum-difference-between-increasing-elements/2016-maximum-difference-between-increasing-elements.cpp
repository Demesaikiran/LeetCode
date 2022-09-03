class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        
        int numsSize = nums.size();
        vector<int> maxArray(numsSize);
        
        if(numsSize <= 1)
            return -1;
        
        int max = nums[numsSize - 1];
        
        for(int i = numsSize - 2; i >= 0; i --)
        {
            maxArray[i] = max;
            
            if(max < nums[i]) max = nums[i];
        }
        
        max = -1;
        
        for(int i = 0; i < numsSize -1; i ++)
            if(maxArray[i] > nums[i])
            {
                int diff = maxArray[i] - nums[i];
                
                if(diff > max)
                    max = diff;
            }
        
        return max == -1 ? -1 : max;
    }
};
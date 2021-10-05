class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int len = nums.size();
        int zeroCount = 0;
        int pointer = 0;
        
        if(len == 1 or len == 0)
            return;
        
        for(int i = 0; i < nums.size(); i++)
        {
            if(nums[i] == 0)
            {
                zeroCount++;
                continue;
            }
            else
            {
                nums[pointer] = nums[i];
                pointer++;
            }
        }
        while(pointer < len)
        {
            nums[pointer++] = 0;
        }
    }
};
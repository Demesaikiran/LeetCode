class Solution {
public:
    bool isArraySpecial(vector<int>& nums) {
        if(nums.size() == 1)
            return true;

        for(int i = 0; i < nums.size() - 1; i++)
        {
            int a = nums[i];
            int b = nums[i + 1];

            if((a+b) % 2 == 0)
                return false;

        }

        return true;
    }
};
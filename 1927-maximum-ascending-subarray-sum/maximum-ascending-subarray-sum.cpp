class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        if(nums.size() == 1) return nums[0];
        int result = nums[0];
        int temp = nums[0];


        for(int i = 0; i < nums.size() - 1; i++)
        {
            int a = nums[i];
            int b = nums[i + 1];

            if(a >= b)
            {
                result = result < temp ? temp : result;
                temp = b;
            }
            else
                temp += b;
             
        }

        return result < temp ? temp : result;

    }
};
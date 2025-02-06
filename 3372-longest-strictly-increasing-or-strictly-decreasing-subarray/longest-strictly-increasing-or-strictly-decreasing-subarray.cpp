class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        if(nums.size() == 1) return 1;
        int result = 1;
        int gtemp = 1;
        int ltemp = 1;


        for(int i = 0; i < nums.size() - 1; i++)
        {
            int a = nums[i];
            int b = nums[i + 1];

            if(a > b)
            {
                gtemp += 1;
                ltemp = 1;
                result = result < gtemp ? gtemp : result;
            }
            else if(a < b)
            {
                ltemp += 1;
                gtemp = 1;
                result = result < ltemp ? ltemp : result;
            }
            else
            {
                gtemp = 1;
                ltemp = 1;
            }
             
        }

        return result;
    }
};
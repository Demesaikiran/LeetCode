class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int result = -1;
        int mini = nums[0];

        for(int i = 0; i < nums.size(); i++)
        {
            if(nums[i] > mini)
                result = max(nums[i] - mini, result);

            mini = min(nums[i], mini);
        }

        return result;
    }
};
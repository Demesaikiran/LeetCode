class Solution {
public:
    int countSubarrays(vector<int>& nums) {
        int result = 0, n = nums.size();

        for(int i = 1; i < n - 1; i++)
        {
            if(nums[i] == 2 * (nums[i - 1] + nums[i + 1])) result++;
        }

        return result;
    }
};
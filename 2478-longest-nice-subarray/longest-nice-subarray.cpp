class Solution {
public:
    int longestNiceSubarray(vector<int>& nums) {
        int n=nums.size();
        int left=0, right=0, xor_sum=0, curr_sum=0, result = 0;
        
        while(right < n)
        {
            curr_sum += nums[right];
            xor_sum ^= nums[right];

            while(xor_sum != curr_sum)
            {
                curr_sum -= nums[left];
                xor_sum ^= nums[left];
                left++;
            }
            result = max(result, right - left + 1);
            right++;
        }

        return result;
    }
};
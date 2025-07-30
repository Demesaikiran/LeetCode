class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int maxVal = *max_element(nums.begin(), nums.end());
        int len = 0, mlen =0;
        for(auto i : nums)
        {
            if(i == maxVal)
            {
                len++;
                mlen = max(mlen, len);
            }
            else
                len = 0;
        }
        return mlen;
    }
};
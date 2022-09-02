class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int len = nums.size(), index1, index2;
        
        for(index1 = len - 2; index1 >= 0; index1 --)
            if(nums[index1] < nums[index1 + 1])
                break;
        
        if(index1 < 0)
            reverse(nums.begin(), nums.end());
        
        else
        {
            for(index2 = len - 1; index2 >= 0; index2--)
            if(nums[index1] < nums[index2])
                break;
        
            swap(nums[index1], nums[index2]);
            reverse(nums.begin() + index1 + 1, nums.end());
        }
        
    }
};
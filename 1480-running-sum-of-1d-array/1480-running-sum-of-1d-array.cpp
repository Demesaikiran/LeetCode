class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int len = nums.size();
        
        if(len == 1) return nums;
        for(int i = 1; i < len; i++){
            nums[i] += nums[i-1];
        }
        return nums;
        
    }
};
class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_set<int> distinct_ele;

        for(int i = 0; i < n; i++)
        {
            if(nums[i] < k) return -1;
            else if(nums[i] > k)
                distinct_ele.insert(nums[i]);
        }

        return distinct_ele.size();
    }
};
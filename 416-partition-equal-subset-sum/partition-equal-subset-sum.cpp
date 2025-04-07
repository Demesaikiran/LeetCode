class Solution {
public:
    bool canPartition(vector<int>& nums) {
        int n = nums.size();
        int sum = 0;
        for(int i = 0; i < n; i++)
            sum += nums[i];
        if(sum %2 != 0)
            return false;

        int subset_sum = sum /2;
        unordered_set<int> possible_sums = {0};
        for (auto num : nums) {
            unordered_set<int> new_sums(possible_sums); 
            for (auto current_sum : possible_sums) 
            {
                int new_sum = current_sum + num;
                if (new_sum == subset_sum) 
                    return true;
                new_sums.insert(new_sum);
            }
            possible_sums = new_sums; 
        }
        return false;
    }
};
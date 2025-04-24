class Solution {
public:
    int countCompleteSubarrays(vector<int>& nums) {
        unordered_set<int> s(nums.begin(), nums.end());

        int count = s.size();
        int result = 0, n = nums.size();

        for (int i = 0; i < n; ++i) 
        {
            s.clear();
            for (int j = i; j < n; ++j) 
            {
                s.insert(nums[j]);

                if (s.size() == count) ++result;
            }
        }
        return result;
    }
};
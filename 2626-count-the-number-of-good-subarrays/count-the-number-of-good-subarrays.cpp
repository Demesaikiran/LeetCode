class Solution {
public:
    long long countGood(vector<int>& nums, int k) {
        unordered_map<int, int> count;

        long long result = 0;
        long long temp = 0;

        int i = 0;
        for (int& x : nums) 
        {
            temp += count[x]++;
            while (temp - count[nums[i]] + 1 >= k) temp -= --count[nums[i++]];
            if (temp >= k) result += i + 1;
        }
        return result;
    }
};
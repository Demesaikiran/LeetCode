class Solution {
public:
    int findGCD(vector<int>& nums) {
        int mini = *max_element(nums.begin(), nums.end());
        int maxi = *min_element(nums.begin(), nums.end());

        return gcd(maxi, mini);
    }
};
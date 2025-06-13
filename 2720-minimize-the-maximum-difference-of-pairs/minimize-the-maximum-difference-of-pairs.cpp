class Solution {
public:
    int Pairs(vector<int> nums, int p) {
        int i = 0, cnt = 0;
        while (i < nums.size() - 1) {
            if (nums[i + 1] - nums[i] <= p) {
                cnt++;
                i++;
            }
            i++;
        }
        return cnt;
    }

    int minimizeMax(vector<int> nums, int p) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int left = 0, right = nums[n - 1] - nums[0];
        while (left < right) {
            int mid = left + (right - left) / 2;
            if (Pairs(nums, mid) >= p)
                right = mid;
            else
                left = mid + 1;
        }
        return left;
    }
};
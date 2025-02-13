class Solution {
public:
    #define ll long long
    int minOperations(vector<int>& nums, int k) {
        priority_queue<ll, vector<ll>, greater<ll>> temp(nums.begin(), nums.end());
        
        int result = 0;

        for (; temp.size() > 1 && temp.top() < k; ++result) 
        {
            ll a = temp.top();
            temp.pop();

            ll b = temp.top();
            temp.pop();

            temp.push(a * 2 + b);
        }

        return result;
    }
};
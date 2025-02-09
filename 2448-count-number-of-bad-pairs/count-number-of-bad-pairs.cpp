class Solution {
public:
    #define ll long long

    ll nc2(ll n)
    {
        return n < 2 ? 0 : (n * (n - 1) / 2);
    }

    long long countBadPairs(vector<int>& nums) {
        unordered_map<int, ll> good_pairs;
        ll n = nums.size();
        ll result = nc2(n);

        for(int i = 0; i < n; i ++)
        {
            if(good_pairs.find((nums[i] - i)) != good_pairs.end())
            {
                good_pairs[nums[i] - i]++;
            }
            else
                good_pairs[nums[i] - i] = 1;
        }

        for(auto it : good_pairs)
        {
            if(it.second < 2) continue;
            else
            {
                result -= nc2(it.second);
            }
        }

        return result;
    }
};
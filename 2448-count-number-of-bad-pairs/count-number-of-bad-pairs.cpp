class Solution {
public:
    #define ll long long

    ll nc2(ll n)
    {
        return (n * (n + 1) / 2);
    }

    long long countBadPairs(vector<int>& nums) {
        ll n =nums.size();
        ll temp1 = 0, temp2 = 0;
    
        for(int i = 0; i < n; i++)
        {
            nums[i] = i - nums[i];
        }

        sort(nums.begin(), nums.end());

        for(int i = 0; i < n - 1; i++)
        {
            if(nums[i] == nums[i + 1]) temp2++;
            else
            {
                temp1 = temp1 + (nc2(temp2));
                temp2 = 0;
            }
        }

        return (n * (n - 1)) / 2 - temp1 - nc2(temp2);
    }
};
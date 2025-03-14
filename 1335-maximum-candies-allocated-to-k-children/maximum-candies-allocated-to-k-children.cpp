class Solution {
public:
    #define ll long long

    bool checkDistribution(ll mid, vector<int> candies, ll k)
    {
        ll count = 0;
        for(ll temp : candies)
            if(temp >= mid)
                count += temp / mid;
        
        return count >= k;
    }

    int maximumCandies(vector<int>& candies, long long k) {
        ll result = 0, left = 1; 
        ll right = *max_element(candies.begin(), candies.end());
        ll mid = 0;

        while(left <= right)
        {
            mid = left + (right - left) / 2;

            if(checkDistribution(mid, candies, k))
            {
                result = mid;
                left = mid + 1;
            }
            else
                right = mid - 1;
        }
        return result;
    }
};
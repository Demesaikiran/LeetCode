class Solution {
public:
    #define ll long long
    bool checkTime(vector<int> ranks, ll mid,int cars)
    {
        ll count = 0;

        for(ll rank: ranks)
        {
            count += sqrt(mid/rank);
            if(count >= cars) return true;
            
        }
            
        return false;
    }

    long long repairCars(vector<int>& ranks, int cars) {
        ll n = ranks.size();
        ll result, left = 1;
        ll right = (ll)*min_element(ranks.begin(),ranks.end()) * cars * cars;
        
        sort(ranks.begin(), ranks.end());

        while(left <= right)
        {
            ll mid = left + (right - left) / 2;

            if(checkTime(ranks, mid, cars))
            {
                result = mid;
                right = mid - 1;
            }
            else
            {
                left = mid + 1;
            }
        }
        return result;
    }
};
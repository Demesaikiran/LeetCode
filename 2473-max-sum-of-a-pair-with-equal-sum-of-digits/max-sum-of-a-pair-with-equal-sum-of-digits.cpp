class Solution {
public:
    int digitSum(int temp)
    {
        int sum = 0;

        while(temp)
        {
            sum += temp % 10;
            temp /= 10;
        }

        return sum;
    }

    int maximumSum(vector<int>& nums) {
        unordered_map<int , int> res_map;
        int res = -1;

        for(auto temp : nums)
        {
            int digiSum = digitSum(temp);

            if(res_map.count(digiSum))
            {
                res = max(res, temp + res_map[digiSum]);

                if(res_map[digiSum] < temp)
                    res_map[digiSum] = temp;
            }
            else
                res_map[digiSum] = temp;
        }
        return res;
    }
};
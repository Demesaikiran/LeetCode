class Solution {
public:
    int minZeroArray(vector<int>& nums, vector<vector<int>>& queries) {
        vector<int> diff_array(nums.size() + 1);

        int k = 0, sum = 0;

        for(int i = 0; i < nums.size(); i++)
        {
            while(sum + diff_array[i] < nums[i])
            {
                if(k == queries.size())
                    return -1;

                int l = queries[k][0];
                int r = queries[k][1];
                int val = queries[k][2];
                k++;

                if(r < i)
                    continue;
                
                diff_array[max(l, i)] += val;
                diff_array[r + 1] -= val;
            }
            sum += diff_array[i];
        }

        return k;
    }
};
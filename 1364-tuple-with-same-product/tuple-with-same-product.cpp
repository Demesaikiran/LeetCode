class Solution {
public:
    int tupleSameProduct(vector<int>& nums) {
        vector<int> product;
        
        int result = 0;
        int n = nums.size();

        for(int i = 0; i < n - 1; i++)
        {
            for(int j = i + 1; j < n; j++)
            {
                int temp = nums[i] * nums[j];
                product.push_back(temp);
            }
        }

        sort(product.begin(), product.end());

        int prev = product[0];
        int count = 1;
        for(int i = 1; i < product.size(); i++)
        {
            if(product[i] == prev)
                count++;
            else
            {
                result += (count * (count - 1)) / 2;
                count = 1;
                prev = product[i];
            }
        }

        return 8 * result;
    }
};
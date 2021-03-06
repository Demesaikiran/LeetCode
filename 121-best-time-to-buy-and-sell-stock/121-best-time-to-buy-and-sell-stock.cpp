class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int len = prices.size();
        if(len <= 0)
            return 0;
        int arr[len];
        arr[len-1] = 0;
        int max = prices[len -1];
        
        for(int i = len - 2; i >= 0; i--)
        {
            arr[i] = max;
            if(prices[i] > max)
            {
                max = prices[i];
            }
        }
        
        max = -1;
        for(int i = 0; i < len; i++)
        {
            int element = arr[i];
            arr[i]      = arr[i] - prices[i];
            if(max < arr[i]) max = arr[i];
            
        }
        
        return max == -1 ? 0 : max;
    }
};
class Solution {
public:
    int maxDistance(vector<int>& colors) {
        int colorsLen = colors.size();
        int start = 0;
        int end = colorsLen - 1;
        int maxDiff = -1;
        
        
        while(start < end)
        {
            if(colors[start] == colors[end])
                end --;
            
            else
            {
                maxDiff = max(maxDiff, abs(end - start));
                start ++;
            }
        }
        
        start = 0;
        end = colorsLen - 1;
        
        while(start < end)
        {
            if(colors[start] == colors[end])
                start++;
            
            else
            {
                maxDiff = max(maxDiff, abs(end - start));
                end --;
            }
        }
        
        return maxDiff;
    }
};
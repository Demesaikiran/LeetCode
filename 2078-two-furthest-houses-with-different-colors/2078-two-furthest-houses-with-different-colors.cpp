class Solution {
public:
    int maxDistance(vector<int>& colors) {
        int colorsLen = colors.size();
                
        int maxDiff = -1;
        
        for(int i = 0; i < colorsLen; i++)
            for(int j = 1; j < colorsLen; j++)
            {
                if(colors[i] != colors [j])
                    if(abs(i - j) > maxDiff) maxDiff = abs(i - j);
            }
        
        return maxDiff;
    }
};
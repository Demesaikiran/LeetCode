class Solution {
public:
    
     static bool sortByVal(const pair<int, int> &a, const pair<int, int> &b)
    {
        return (a.second > b.second);
    }
    
    vector<int> rearrangeBarcodes(vector<int>& barcodes) {
        map<int, int> frequency;
        
        int bar_size = barcodes.size();
        vector<int> result(bar_size);

        
        for(auto i: barcodes)
            frequency[i]++;
        
        
        vector<pair<int, int>> sortedValues;
        
        for(auto i: frequency)
            sortedValues.push_back({i.first, i.second});
        
        sort(sortedValues.begin(), sortedValues.end(), sortByVal);
        
        vector<pair<int, int>>:: iterator it;
        
        bool oddFlag = false;
        int index = 0;
        
        for(auto traverse: sortedValues)
        {
            int value = traverse.first, freq = traverse.second;
            
            while(freq --)
            {
                if(index >= bar_size)
                    index = 1;
                result[index] = value;
                index += 2;
            }
            
        }
        
        return result;
        
        
    }
};
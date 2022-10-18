class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        int count = 0;
        int element = 0;
        
        for(int num: nums)
        {
            if(count){
                count += num == element ? 1 : -1;
            }
            
            else
            {
                element = num;
                count = 1;
            }
        }
        
        return element;
        
    }
};
class Solution {
public:
    bool divideArray(vector<int>& nums) {
        int n = nums.size();

        vector<int> dump(502, 0);

        for(int i = 0; i < n; i++)
            dump[nums[i]]++;

        for(int i = 1; i <= 500; i++)
            if(dump[i] % 2 != 0) return false;
        
        return true;
        
    }
};
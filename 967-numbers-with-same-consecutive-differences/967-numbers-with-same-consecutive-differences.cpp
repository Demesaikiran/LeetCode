class Solution {
private:
    vector<int> result;
public:
    int digitCount(int num)
    {
        return trunc(log10(num)) + 1;
    }
    
    void findNext(int num, int n, int k)
    {
        if(digitCount(num) == n)
        {
            result.push_back(num);
            return;
        }
        
        for(int i = 0; i < 10; i ++)
        {
            int last_digit = num % 10;
            if(abs(last_digit - i) == k)
            {
                int temp = num * 10 + i;
                findNext(temp, n, k);
            }
        }        
    }
    
    vector<int> numsSameConsecDiff(int n, int k) {
        
        for(int i = 1; i < 10; i++)
            findNext(i, n, k);
        
        return  result;

    }
        
        
};
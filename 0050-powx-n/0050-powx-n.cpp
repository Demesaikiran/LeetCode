class Solution {
public:
    double myPow(double x, int n) {
        double ans = 1.0;
        
        long long temp = n;
        
        temp = n < 0 ? -1 * temp : temp;
        
        while(temp)
        {
            if(temp & 1 == 1)
                ans *= x;
            x *= x;
            temp >>= 1;
            
        }
        
        return n > 0 ? ans : 1.0 / ans;
        
    }
};
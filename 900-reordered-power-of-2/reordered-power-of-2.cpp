class Solution {
public:
    bool reorderedPowerOf2(int n) 
    {
        string result = f(n);
        for (int i = 1; i <= 1000000000; i <<= 1) 
        {
            if (result == f(i)) return true;
        }
        return false;
    }

private:
    string f(int x) 
    {
        char cnt[10] = {};
        while (x > 0) 
        {
            cnt[x % 10]++;
            x /= 10;
        }
        return string(cnt, cnt + 10);
    }
};
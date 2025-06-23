class Solution {
public:

    long long create_palindrome(long long num, bool odd)
    {
        long long temp = num;
        if(odd) temp /= 10;

        while(temp > 0)
        {
            num = num * 10 + temp % 10;
            temp /= 10;
        }

        return num;
    }

    bool isPalindrome(long long num, int base)
    {
        vector<int> digits;
        while(num > 0)
        {
            digits.push_back(num % base);
            num /= base;
        }

        int i = 0, j = digits.size() - 1;

        while (i < j)
        {
            if(digits[i++] != digits[j--]) return false;
        }
        return true;
    }

    long long kMirror(int k, int n) {
        long long result = 0;

        for(long long len = 1; n > 0; len *= 10)
        {
            for(long long i = len; n > 0 && i < len * 10; i++)
            {
                long long num = create_palindrome(i, true);
                if(isPalindrome(num, k))
                {
                    result += num;
                    n--;
                }
            }

            for(long long i = len; n > 0 && i < len * 10; i++)
            {
                long long num = create_palindrome(i, false);

                if(isPalindrome(num, k))
                {
                    result += num;
                    n--;
                }
            }
        }

        return result;
    }
};
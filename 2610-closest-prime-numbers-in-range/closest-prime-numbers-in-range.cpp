class Solution {
public:
    vector<bool> sieveOfEratosthenes(int n) {
        vector<bool> prime(n + 1, true);

        prime[0] = false;
        prime[1] = false;

        for (int p = 2; p * p <= n; p++) {

            if (prime[p] == true) {
                for (int i = p * p; i <= n; i += p)
                    prime[i] = false;
            }
        }

        return prime;
    }

    vector<int> closestPrimes(int left, int right) {
        if(left == right) return {-1, -1};

        vector<bool> primes = sieveOfEratosthenes(right);
        int left_prime = -1, right_prime = -1;
        int x = -1, y = -1;

        int min = right - left + 1;

        for(int i = left; i <= right; i++)
        {
            if(primes[i])
            {
                if(x == -1) x = i;
                else
                {
                    y = i;
                    if(min > y - x)
                    {
                        min = y - x;
                        left_prime = x;
                        right_prime = y;
                    }
                    x = y;
                }
            }
        }

        if(x == -1 || y == -1) return {-1, -1};
        return {left_prime, right_prime};
    }
};
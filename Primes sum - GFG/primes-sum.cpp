//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
public:
    bool isPrime(int x)
    {
        for(int i = 2; i * i <= x; i++)
            if(x % i == 0) return false;
        return true;
    }
    
    bool isPossible(int N)
    {
        if(N < 4) return false;
        if(N % 2 == 0) return true;
        return isPrime( N - 2 );
        
    }
    string isSumOfTwo(int N){
        if(isPossible(N)) return "Yes";
        return "No";
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        cout << ob.isSumOfTwo(N) << endl;
    }
    return 0;
}

// } Driver Code Ends
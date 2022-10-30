//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
	long long int NoOfChicks(int n){
        vector<long long int> chicks_count(n, 0);
        
        chicks_count[0] = 1;
        long long int sum = 1;
        
        for(int i = 1; i < n; i++)
        {
            if(i >= 6) sum -= chicks_count[i - 6];
            chicks_count[i] = 2 * sum;
            sum += chicks_count[i];
        }
        
        return sum;
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int N;
		cin >> N;
		Solution obj;
		long long int ans = obj.NoOfChicks(N);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends
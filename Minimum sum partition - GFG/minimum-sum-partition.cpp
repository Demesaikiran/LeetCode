//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{

  public:
    int subsetGenerate(int arr[],int n,int sum,int cursum,vector<vector<int>>&dp)
    {
        //base case, when array index nn becomes zero
        if(n==0)
        {
            //here sum is the sum of the all element of the array
            //cursum is the sum of any subset of array
            //So cursum is the sum of one set and its difference with sum is the sum of second set
            int second_set=abs(sum-cursum);
            return abs(cursum-second_set);
        }
        if(dp[n][cursum]!=-1) return dp[n][cursum];
        //return the minimum value of pickinng and non-picking og elements
        //if we pick then add the element in our current sum and decrease the index
        //if not pick then cursum remain same only index is decreases.
        return dp[n][cursum]=min(subsetGenerate(arr,n-1,sum,cursum+arr[n-1],dp),subsetGenerate(arr,n-1,sum,cursum,dp));
    }
	int minDifference(int arr[], int n)  { 
	    int sum=0;
        //finding the sum of all the elements of the array
        for(int i=0;i<n;i++)
        {
            sum+=arr[i];
        }
        //creating 2 D matrix dp
        vector<vector<int>> dp(n+1,vector<int>(sum+1,-1));
        return subsetGenerate(arr,n,sum,0,dp);
	} 
};


//{ Driver Code Starts.
int main() 
{
   
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int a[n];
        for(int i = 0; i < n; i++)
        	cin >> a[i];

       

	    Solution ob;
	    cout << ob.minDifference(a, n) << "\n";
	     
    }
    return 0;
}
// } Driver Code Ends
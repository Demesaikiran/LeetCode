//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    vector<int> leafNodes(int arr[],int N) {
        vector<int> result;
        stack<int> my_stack;
        
        for(int i = 0, j = 1; j < N; i ++, j++)
        {
            bool found = false;
            
            if(arr[i] > arr[j])
                my_stack.push(arr[i]);
                
            else
            {
                while(!my_stack.empty())
                {
                    if(arr[j] > my_stack.top())
                    {
                        my_stack.pop();
                        found = true;
                    }
                    else
                        break;
                }
            }
            
            if(found)
                result.push_back(arr[i]);
        }
        
        result.push_back(arr[N - 1]);
        
        return result;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin >> N;
        int arr[N];
        for(int i=0;i<N;i++)cin>>arr[i];
        Solution ob;
        vector<int>ans=ob.leafNodes(arr,N);
        for(int i=0;i<ans.size();i++)cout<<ans[i]<<" ";
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends
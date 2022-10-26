//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int findMin(int n, char a[]){
        
        int red = 0, green = 0, blue = 0;
        
        for(int i = 0; i < n; i++)
        {
            switch(a[i]){
                case 'R': red ++; break;
                case 'G': green++; break;
                case 'B': blue++; break;
            }
        }
        
        if(red == n || green == n || blue == n)
            return red + green + blue;
            
        if((red % 2 != 0 && green % 2 != 0 && blue % 2 != 0) || (red % 2 == 0 && green % 2 == 0 && blue % 2 == 0))
            return 2;
        else
            return 1;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        char a[n];
        for(int i = 0;i < n;i++)
            cin>>a[i];
        
        Solution ob;
        cout<<ob.findMin(n, a)<<"\n";
    }
    return 0;
}
// } Driver Code Ends
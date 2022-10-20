//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{   
public:
    void leftRotate(int arr[], int n, int d) {
        
        int index = 0, temp_d = d - 1;
        
        while(temp_d > index)
        {
            swap(arr[temp_d--], arr[index++]);
        }
        
        index = d;
        temp_d = n - 1;
        
        while(temp_d > index)
        {
            swap(arr[temp_d--], arr[index++]);
        }
        
        index = 0;
        
        while(n > index)
        {
            swap(arr[--n], arr[index++]);
        }
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, d;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        cin >> d;
        Solution ob;
        ob.leftRotate(arr, n, d);
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}



// } Driver Code Ends
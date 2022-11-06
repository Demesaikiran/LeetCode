//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    int binarysearch(int arr[], int n, int k) {
        
        if(n == 1 && arr[n - 1] == k) return 0;
        else if(n == 1 && arr[n - 1] != k) return -1;
        
        int left = 0;
        int right = n - 1;
        
        while(left <= right)
        {
            int mid = (left + right) / 2;
            
            if(arr[mid] == k)
                return mid;
                
            else if(arr[mid] > k)
                right = mid - 1;
                
            else
                left = mid + 1;
        }
        return -1;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;

    while (t--) {
        int N;
        cin >> N;
        int arr[N];
        for (int i = 0; i < N; i++) cin >> arr[i];
        int key;
        cin >> key;
        Solution ob;
        int found = ob.binarysearch(arr, N, key);
        cout << found << endl;
    }
}

// } Driver Code Ends
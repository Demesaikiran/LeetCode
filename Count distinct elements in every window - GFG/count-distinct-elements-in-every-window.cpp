//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends

class Solution{
  public:
    vector <int> countDistinct (int A[], int n, int k)
    {
        unordered_map<int, int> hashmap;
        vector<int> result(n - k + 1);
        int index = 0, count = 0;
        
        for(int i = 0; i < k; i++)
        {
            if(hashmap[A[i]] == 0)
                count++;

            hashmap[A[i]]++;
        }
        
        result[index++] = hashmap.size();
        
        for(int i = k; i < n; i++)
        {
            if(hashmap[A[i - k]] ==1)
                count--;
                
            hashmap[A[i - k]]--;
            
            if(hashmap[A[i]] == 0)
                count++;
                
            hashmap[A[i]] ++;
            
            result[index++] = count;
        }
        return result;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int n, k;
        cin >> n >> k;
        int a[n];
        for (int i = 0; i < n; i++) 
        	cin >> a[i];
        Solution obj;
        vector <int> result = obj.countDistinct(a, n, k);
        for (int i : result) 
        	cout << i << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends
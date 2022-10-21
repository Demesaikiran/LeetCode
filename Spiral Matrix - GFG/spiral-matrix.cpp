//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{

	public:
	int findK(vector<vector<int>> &a, int n, int m, int k)
    {
        int R = n, C = m;
        if(R == 1 && C == 1) return a[0][0];
        
        int index = 1;
        
        vector<vector<bool>> visited(R, vector<bool> (C, false));
        
        int row[] = {0, 1, 0, -1};
        int col[] = {1, 0, -1, 0};
        
        
        int x = 0, y = 0, direction = 0, n_elem = R * C;
        
        for(int i = 0; i < n_elem; i++)
        {
            visited[x][y] = true;
            
            if(index++ == k) return a[x][y];

            int new_x = x + row[direction];
            int new_y = y + col[direction];
            
            if(new_x >= 0 && new_x < R && new_y >=0 && new_y < C && !visited[new_x][new_y])
            {
                x = new_x;
                y = new_y;
            }
            else
            {
                direction = (++direction) % 4;
                x += row[direction];
                y += col[direction];
            }
        }
        
    }

};

//{ Driver Code Starts.

int main()
{
    int T;
    cin>>T;
  
    while(T--)
    {
        int n,m;
        int k=0;
        //cin>>k;
        cin>>n>>m>>k;
        vector<vector<int>> a(n, vector<int>(m, 0));
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>a[i][j];
            }
        }

        Solution obj;

        cout<< obj.findK(a, n, m, k) << "\n";
        
       
    }
}
// } Driver Code Ends
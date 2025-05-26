class Solution {
public:
    int largestPathValue(string colors, vector<vector<int>>& edges) {
        int n = colors.length(), result = 0;
        vector<vector<int>>graph(n);
        vector<int> indegree(n);
        queue<int> q;

        for(vector<int>& edge: edges)
        {
            int u = edge[0];
            int v = edge[1];
            graph[u].push_back(v);
            indegree[v]++;
        }

        for(int i = 0; i < n; i++)
            if(indegree[i] == 0) q.push(i);
        
        vector<vector<int>> count(n, vector<int>(26));
        int visited = 0;

        while(!q.empty())
        {
            int node = q.front();
            q.pop();
            visited++;

            result = max(result, ++count[node][colors[node] - 'a']);
            for (const int in : graph[node]) 
            {
                for (int i = 0; i < 26; ++i)
                    count[in][i] = max(count[in][i], count[node][i]);
                if (--indegree[in] == 0)
                q.push(in);
            }
        }
        return visited == n ? result : -1;

    }
};
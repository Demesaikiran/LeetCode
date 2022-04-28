class Solution {
public:
    int minimumEffortPath(vector<vector<int>>& heights) {
        const vector<int> directions{0, -1, 0, 1, 0};
        const int rows = heights.size();
        const int cols = heights[0].size();
        
        using Node = pair<int, int>;
        
        priority_queue<Node, vector<Node>, greater<Node>> q;
        vector<int> dist(rows * cols, INT_MAX / 2);
        
        q.emplace(0,0);
        dist[0] = 0;
        
        while(!q.empty())
        {
            auto [t, u] = q.top(); q.pop();
            
            if (u == rows * cols - 1) return t;
            if (t > dist[u]) continue;
            
            const int ux = u % cols;
            const int uy = u / cols;
            for (int i = 0; i < 4; ++i) {
                const int x = ux + directions[i];
                const int y = uy + directions[i + 1];
                if (x < 0 || x == cols || y < 0 || y == rows) continue;
                const int v = y * cols + x;
                const int c = abs(heights[uy][ux] - heights[y][x]);
                
                if (max(t, c) >= dist[v]) continue;
                q.emplace(dist[v] = max(t, c), v);
            }
        }
        return -1;
    }
};
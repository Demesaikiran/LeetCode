class Solution {
public:
    vector<int> minimumCost(int n, vector<vector<int>>& edges, vector<vector<int>>& query) {
        vector<int> parent(n), cost(n, -1);
        iota(parent.begin(), parent.end(), 0);
        function<int(int)> find_root = [&](int node) {
            if (parent[node] != node) {
                parent[node] = find_root(parent[node]);
            }
            return parent[node];
        };
        for(int i = 0 ; i < edges.size(); i++)
        {
            int src = edges[i][0], des = edges[i][1], wt = edges[i][2];
            int src_parent = find_root(src);
            int des_parent = find_root(des);
            cost[des_parent] &= wt;
            if(src_parent != des_parent)
            {
                cost[des_parent] &= cost[src_parent];
                parent[src_parent] = des_parent;
            }
        }
        vector<int> res;
        for(int i = 0 ; i < query.size(); i++)
        {
            int start = query[i][0], dest = query[i][1];
            if(find_root(start) == find_root(dest))
                res.push_back(cost[find_root(start)]);
            else
                res.push_back(-1);
        }
        return res;
    }
};
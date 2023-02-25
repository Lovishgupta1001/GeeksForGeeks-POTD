class Solution
{
public:
    void dfs(int src, vector<vector<int>> &adj, vector<bool> &vis, int &c, int &e)
    {
        vis[src] = 1;
        c++;
        for (auto it : adj[src])
        {
            e++;
            if (!vis[it])
                dfs(it, adj, vis, c, e);
        }
    }
    int findNumberOfGoodComponent(int V, vector<vector<int>> &adj)
    {
        // code here
        vector<bool> vis(V + 1, 0);
        int c, e, res = 0;
        for (int i = 1; i <= V; i++)
        {
            if (!vis[i])
            {
                c = 0, e = 0;
                dfs(i, adj, vis, c, e);
                if (e / 2 == (c * (c - 1) / 2))
                    res++;
            }
        }
        return res;
    }
};
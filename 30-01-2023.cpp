// User function Template for C++

class Solution
{
public:
    int ans;
    bool isLeaf(int node, int par, vector<int> adj[])
    {
        int count = 0;
        for (auto it : adj[node])
            if (it != par)
                count++;
        return count == 0;
    }
    bool dfs(int node, int par, vector<int> adj[])
    {
        if (isLeaf(node, par, adj))
            return true;
        bool flag = false;
        for (auto it : adj[node])
            if (it != par)
                flag |= dfs(it, node, adj);
        if (flag)
            ans++;
        return !flag;
    }
    int countVertex(int N, vector<vector<int>> edges)
    {
        // code here
        ans = 0;
        vector<int> adj[N + 1];
        for (auto i : edges)
        {
            adj[i[0]].push_back(i[1]);
            adj[i[1]].push_back(i[0]);
        }
        vector<int> vis(N + 1);
        dfs(1, -1, adj);
        return ans;
    }
};
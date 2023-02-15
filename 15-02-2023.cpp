// User function Template for C++

class Solution
{
public:
    vector<int> dx = {-1, 0, 1, 0};
    vector<int> dy{0, 1, 0, -1};

    void dfs(int x, int y, vector<vector<int>> &vis, vector<vector<int>> &mat)
    {
        int n = mat.size();
        int m = mat[0].size();

        vis[x][y] = 1;

        for (int i = 0; i < 4; i++)
        {
            int nx = x + dx[i];
            int ny = y + dy[i];

            if (nx >= 0 and nx < n and ny >= 0 and ny < m)
            {
                if (vis[nx][ny] == 0 and mat[nx][ny] >= mat[x][y])
                {
                    dfs(nx, ny, vis, mat);
                }
            }
        }
    }
    int water_flow(vector<vector<int>> &mat, int n, int m)
    {
        // Write your code here.
        vector<vector<int>> vis1(n, vector<int>(m, 0));
        vector<vector<int>> vis2(n, vector<int>(m, 0));

        for (int j = 0; j < m; j++)
        {
            if (vis1[0][j] == 0)
                dfs(0, j, vis1, mat);
            if (vis2[n - 1][j] == 0)
                dfs(n - 1, j, vis2, mat);
        }

        for (int i = 0; i < n; i++)
        {
            if (vis1[i][0] == 0)
                dfs(i, 0, vis1, mat);
            if (vis2[i][m - 1] == 0)
                dfs(i, m - 1, vis2, mat);
        }
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (vis1[i][j] && vis2[i][j])
                    ++ans;
            }
        }
        return ans;
    }
};
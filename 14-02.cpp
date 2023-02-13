// User function Template for C++

class Solution
{
public:
    int minCost(vector<vector<int>> &colors, int n)
    {
        // Write your code here.
        for (int i = 1; i < n; i++)
        {
            colors[i][0] += min(colors[i - 1][1], colors[i - 1][2]);
            colors[i][1] += min(colors[i - 1][0], colors[i - 1][2]);
            colors[i][2] += min(colors[i - 1][0], colors[i - 1][1]);
        }
        return min({colors[n - 1][0], colors[n - 1][1], colors[n - 1][2]});
    }
};
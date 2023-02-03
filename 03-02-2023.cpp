// User function Template for C++

class Solution
{
public:
    pair<int, int> endPoints(vector<vector<int>> mat, int r, int c)
    {
        // code here
        int i, j, v, h = 1;
        i = j = v = 0;
        while (i >= 0 && j >= 0 and i < r and j < c)
        {
            if (mat[i][j] != 0)
            {
                mat[i][j] = 0;
                if (h)
                    v = h, h = 0;
                else
                    h = -v, v = 0;
            }
            i += v, j += h;
        }
        i = min(i, r - 1), i = max(i, 0);
        j = min(j, c - 1), j = max(j, 0);
        return {i, j};
    }
};
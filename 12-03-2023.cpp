// User function Template for C++

class Solution
{
public:
    vector<int> findMaxRow(vector<vector<int>> mat, int n)
    {
        // code here
        vector<int> ans;
        int maxi = 0;
        int row = 0;
        for (int j = 0; j < n; j++)
        {
            for (int i = 0; i < n; i++)
            {
                if (mat[i][j] == 1)
                {
                    if (n - j > maxi)
                    {
                        maxi = n - j;
                        row = i;
                    }
                    // maxi=max(maxi,n-j);
                    // row=i;
                }
            }
        }
        return {row, maxi};
    }
};
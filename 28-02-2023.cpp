// User function Template for C++

class Solution
{
public:
    vector<int> optimalArray(int n, vector<int> &a)
    {
        // Code here
        vector<int> ans(n, 0);
        int i = 1;
        while (i < n)
        {
            ans[i] = ans[i - 1] + (a[i] - a[i / 2]);
            i++;
        }
        return ans;
    }
};
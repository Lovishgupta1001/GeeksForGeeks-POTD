// User function Template for C++
class Solution
{
public:
    // dp[i]=-1 , means index is not visited

    // dp[i]=0 , means index is visited and in processing

    // dp[i]=1, means index is visited and good stone

    // dp[i]=2 means index is visted ans bad stone

    int helper(int i, vector<int> &arr, vector<int> &dp)
    {
        int n = arr.size();

        if (i < 0 || i >= n)
            return 1;
        if (dp[i] >= 1)
            return dp[i];
        if (dp[i] == 0)
            return 2;

        dp[i] = 0;
        int a = i + arr[i];
        dp[i] = helper(a, arr, dp);
        return dp[i];
    }

    int goodStones(int n, vector<int> &arr)
    {
        // Code here
        int ans = 0;
        vector<int> dp(n, -1);

        for (int i = 0; i < n; i++)
        {
            if (dp[i] == -1)
            {
                helper(i, arr, dp);
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (dp[i] == 1)
                ans++;
        }
        return ans;
    }
};
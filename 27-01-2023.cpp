class Solution
{
public:
    long long mod = 1e9 + 7;
    // f function for memoisation
    int f(string s, int i, int n, vector<int> &dp)
    {
        if (i < n and s[i] == '0')
            return 0;
        if (i == n)
            return 1;
        if (i == n - 1)
            return 1;
        if (dp[i] != -1)
            return dp[i];
        int take = f(s, i + 1, n, dp);
        string str = s.substr(i, 2);
        int val = stoi(str);
        int nt = 0;
        if (val <= 26)
        {
            nt = f(s, i + 2, n, dp);
        }
        return dp[i] = (take + nt) % mod;
    }
    int CountWays(string str)
    {
        int n = str.size();
        // Tabulation
        vector<int> dp(n + 1, 0);

        dp[n] = 1;
        if (str[n - 1] != '0')
            dp[n - 1] = 1;

        for (int i = n - 2; i >= 0; i--)
        {
            if (str[i] == '0')
            {
                dp[i] = 0;
                continue;
            }
            int take = dp[i + 1];
            string str1 = str.substr(i, 2);
            int val = stoi(str1);
            int nt = 0;
            if (val <= 26)
            {
                nt = dp[i + 2];
            }
            dp[i] = (take + nt) % mod;
        }
        return dp[0];
        //  return f(str,0,str.size(),dp);
    }
};
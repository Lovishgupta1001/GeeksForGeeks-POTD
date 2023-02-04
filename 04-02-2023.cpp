// User function template for C++
class Solution
{
public:
    // calculate the maximum sum with out adjacent
    int findMaxSum(int *arr, int n)
    {
        // code here
        if (n == 1)
            return arr[0];
        int prevprev = arr[0];
        int prev = max(arr[0], arr[1]);

        for (int i = 2; i < n; i++)
        {
            int curr = max(prevprev + arr[i], prev);
            prevprev = prev;
            prev = curr;
        }
        return prev;
    }
};

// Also DP Approach is here with the help of Memoization in which we use recusrion and do the process recursively\
//User function template for C++

class Solution
{
public:
    // calculate the maximum sum with out adjacent
    int fun(int i, int *arr, int n, vector<int> &dp)
    {
        if (i >= n)
            return 0;
        if (dp[i] != -1)
            return dp[i];
        int tk = 0, nt = 0;
        nt = fun(i + 1, arr, n, dp);
        tk = arr[i] + fun(i + 2, arr, n, dp);
        return dp[i] = max(tk, nt);
    }
    int findMaxSum(int *arr, int n)
    {
        // code here
        vector<int> dp(n + 1, -1);
        return fun(0, arr, n, dp);
    }
};
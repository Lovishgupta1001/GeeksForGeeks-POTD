// User function Template for C++

class Solution
{
public:
    int countPaths(int n)
    {
        // code here
        if (n == 1)
            return 0;
        long long a = 3;
        if (n == 2)
            return 3;

        for (int i = 3; i <= n; i++)
        {
            if (i & 1)
                a = (a * 3) % 1000000007 - 3;
            else
                a = (a * 3) % 1000000007 + 3;
        }
        return a % 1000000007;
    }
};
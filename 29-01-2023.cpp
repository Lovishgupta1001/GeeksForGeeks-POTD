class Solution
{
public:
    int solve(int a, int b)
    {
        // code here
        if (a == b)
            return 0;
        if ((a & b) == min(a, b))
            return 1;
        return 2;
    }
};
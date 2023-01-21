// User function Template for C++

class Solution
{
public:
    int minVal(int a, int b)
    {
        // code here
        int c = 0;
        for (int i = 0; i < 32; i++)
        {
            if (1 << i & b)
                c++;
        }
        int x = 0;
        for (int i = 31; i >= 0 and c > 0; i--)
        {
            if (1 << i & a)
            {
                x += pow(2, i);
                c--;
            }
        }
        if (!c)
            return x;
        for (int i = 0; i < 31 and c > 0; i++)
        {
            if (!(1 << i & a))
            {
                x += pow(2, i);
                c--;
            }
        }
        return x;
    }
};
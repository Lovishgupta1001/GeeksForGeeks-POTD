// User function Template for C++

class Solution
{
public:
    int carpetBox(int A, int B, int C, int D)
    {
        // code here
        if (A > B)
            swap(A, B);
        if (C > D)
            swap(C, D);
        if (A <= C and B <= D)
            return 0;

        if (B <= D)
            return 1 + carpetBox(A / 2, B, C, D);
        if (A <= C or A <= D)
            return 1 + carpetBox(A, B / 2, C, D);

        return 2 + carpetBox(A / 2, B / 2, C, D);
    }
};
class Solution
{
public:
    int getMinimumDays(int n, string s, vector<int> &a)
    {
        // code here
        string t(n, '?');
        for (int i = n - 1; i >= 0; i--)
        {
            int ind = a[i];
            if (ind > 0 and s[ind] == t[ind - 1])
                return i + 1;
            if (ind < n - 1 and s[ind] == t[ind + 1])
                return i + 1;
            t[ind] = s[ind];
        }
        return 0;
    }
};
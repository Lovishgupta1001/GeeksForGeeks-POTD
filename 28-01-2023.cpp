// User function Template for C++

// Back-end complete function Template for C++

class Solution
{
public:
    bool compare(string s1, string s2, unordered_map<string, bool> &m)
    {
        if (s1 == s2)
            return true;
        if (s1.length() <= 1)
            return false;
        string temp = s1 + "_" + s2;
        if (m.find(temp) != m.end())
            return m[temp];
        int n = s1.size();
        bool flag = false;
        for (int i = 1; i < n; i++)
        {
            if (compare(s1.substr(0, i), s2.substr(0, i), m) and compare(s1.substr(i, n - i), s2.substr(i, n - i), m))
            {
                flag = true;
                break;
            }
            if (compare(s1.substr(0, i), s2.substr(n - i, i), m) and compare(s1.substr(i, n - i), s2.substr(0, n - i), m))
            {
                flag = true;
                break;
            }
        }
        return m[temp] = flag;
    }
    bool isScramble(string s1, string s2)
    {
        // code here
        unordered_map<string, bool> m;
        return compare(s1, s2, m);
    }
};

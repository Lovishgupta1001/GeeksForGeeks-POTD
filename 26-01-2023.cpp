// User function Template for C++

class Solution
{
public:
    // Function to perform case-specific sorting of strings.
    string caseSort(string str, int n)
    {
        // your code here
        vector<char> lc;
        vector<char> uc;
        for (int i = 0; i < n; i++)
        {
            if (str[i] >= 65 and str[i] <= 90)
            {
                uc.push_back(str[i]);
            }
            else
                lc.push_back(str[i]);
        }
        sort(lc.begin(), lc.end());
        sort(uc.begin(), uc.end());
        string ans = "";
        int a = 0, b = 0;
        for (int i = 0; i < n; i++)
        {
            if (str[i] >= 65 and str[i] <= 90)
            {
                ans += uc[b++];
            }
            else
                ans += lc[a++];
        }
        return ans;
    }
};
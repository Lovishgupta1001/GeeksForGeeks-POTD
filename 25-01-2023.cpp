// User function template for C++

class Solution
{
public:
    int minOperation(string s)
    {
        int a = 0; // for checking , if we appended a string or not...

        int ind = 0; // for storing the size of appended string....

        for (int i = 1; i <= s.size() / 2; i++)
        {

            if (s.substr(0, i) == s.substr(i, i))
            {

                a = 1;

                ind = i;
            }
        }

        int ans = s.size();

        ans = ans - ind + a;

        return ans;
    }
};
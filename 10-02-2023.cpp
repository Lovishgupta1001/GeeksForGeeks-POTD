// User function Template for C++

class Solution
{
public:
    int maxInstance(string s)
    {
        map<int, int> mp;
        for (char it : s)
            mp[it]++;

        // return min({mp['a'],mp['b'],mp['l']/2,mp['o']/2,mp['n']});
        int mini = 1e9;
        string str = "balon";

        for (char it : str)
        {
            if (it == 'l' or it == 'o')
            {
                mp[it] /= 2;
            }
            mini = min(mini, mp[it]);
        }
        return mini;
    }
};
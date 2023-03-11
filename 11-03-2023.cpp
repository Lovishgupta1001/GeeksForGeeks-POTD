class Solution
{
public:
    vector<int> solveQueries(int n, int num, vector<int> &a, vector<vector<int>> &q)
    {
        // code here
        unordered_map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            int freq = 1;
            for (int j = i + 1; j < n; j++)
            {
                if (a[i] == a[j])
                    freq++;
            }
            mp[i] = freq;
        }
        vector<int> ans;
        for (int i = 0; i < num; i++)
        {
            int l = q[i][0];
            int r = q[i][1];
            int k = q[i][2];
            int ans2 = 0;
            for (int j = l; j <= r; j++)
            {
                if (mp[j] == k)
                    ans2++;
            }
            ans.push_back(ans2);
        }
        return ans;
    }
};
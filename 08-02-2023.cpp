// User function Template for C++

class Solution
{
public:
    vector<long long int> countZero(int n, int k, vector<vector<int>> &arr)
    {
        // Code Here
        vector<long long int> ans;

        unordered_set<int> umap1, umap2;

        long long int sum = n * n;

        for (int i = 0; i < arr.size(); i++)

        {

            int num1 = arr[i][0];

            int num2 = arr[i][1];

            if (umap1.find(num1) == umap1.end())

            {

                sum = sum - n + umap2.size();

                umap1.insert(num1);
            }

            if (umap2.find(num2) == umap2.end())

            {

                sum = sum - n + umap1.size();

                umap2.insert(num2);
            }

            ans.push_back(sum);
        }

        return ans;
    }
};
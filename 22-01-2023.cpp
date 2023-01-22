class Solution
{
public:
    int solve(int N, int K, vector<int> &arr)
    {
        // code here
        int sum = 0;

        for (int i = 0; i < N; i++)
        {

            sum += arr[i];
        }

        vector<int> v;

        int m = sqrt(sum) + 1;

        for (int i = 1; i < m; i++)
        {

            if (sum % i == 0)
            {

                v.push_back(i);

                v.push_back(sum / i);
            }
        }

        for (int i = 1; i < N; i++)
        {

            arr[i] += arr[i - 1];
        }

        int res = 1;

        for (int x : v)
        {

            int cnt = 0;

            for (int i = 0; i < N; i++)
            {

                if (arr[i] % x == 0)
                {

                    cnt++;
                }
            }

            if (cnt >= K)
                res = max(res, x);
        }

        return res;
    }
};
// User function Template for C++

class Solution
{
public:
    long long solve(int N, int K, vector<long long> nums)
    {
        // code here
        int m = nums.size();
        if (m > N)
            return nums[N - 1];

        long long j = m;
        while (j < N)
        {
            long long t = K;
            long long i = j - 1;
            long long sum = 0;

            while (t--)
            {
                sum += nums[i];
                i--;
            }
            nums.push_back(sum);
            j++;
        }
        return nums[N - 1];
    }
};
// User function template for C++
class Solution
{
public:
    // calculate the maximum sum with out adjacent
    int findMaxSum(int *arr, int n)
    {
        // code here
        if (n == 1)
            return arr[0];
        int prevprev = arr[0];
        int prev = max(arr[0], arr[1]);

        for (int i = 2; i < n; i++)
        {
            int curr = max(prevprev + arr[i], prev);
            prevprev = prev;
            prev = curr;
        }
        return prev;
    }
};
// User function Template for C++

class Solution
{
public:
    long long maxTripletProduct(long long arr[], int n)
    {
        // Complete the function
        sort(arr, arr + n);
        if (arr[n - 1] < 0)
            return arr[n - 1] * arr[n - 2] * arr[n - 3];

        long long front = arr[0] * arr[1];
        long long end = arr[n - 2] * arr[n - 3];

        if (front <= end)
        {
            return end * arr[n - 1];
        }
        else
            return front * arr[n - 1];
        return 0;
    }
};
// User function Template for C++

class Solution
{
public:
    // Function to return the length of the
    // longest subarray with ppositive product

    int maxLength(vector<int> &arr, int n)
    {

        // code here

        int mxleft = 0;

        int mxRight = 0;

        int neg = 0;

        int j = 0;

        for (int i = 0; i < n; i++)

        {

            if (arr[i] == 0)
            {

                neg = 0;

                j = i + 1;

                continue;
            }

            if (arr[i] < 0)
            {

                neg++;
            }

            if (neg % 2 == 0)
            {

                mxleft = max(mxleft, i - j + 1);
            }
        }

        j = n;

        neg = 0;

        for (int i = n - 1; i >= 0; i--)

        {

            if (arr[i] == 0)
            {

                neg = 0;

                j = i;

                continue;
            }

            if (arr[i] < 0)
            {

                neg++;
            }

            if (neg % 2 == 0)
            {

                mxRight = max(mxRight, j - i);
            }
        }

        return max(mxRight, mxleft);
    }
};
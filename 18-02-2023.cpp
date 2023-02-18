// User function Template for C++

class Solution
{
public:
    int appleSequences(int n, int m, string arr)
    {
        // code here
        int maxlen = 0;
        int count = 0;
        int s = 0, e = 0;

        while (e < n)
        {
            if (arr[e] == 'O')
                count++;

            while (s < n and count > m)
            {
                if (arr[s] == 'O')
                    count--;
                s++;
            }
            maxlen = max(maxlen, e - s + 1);
            e++;
        }
        return maxlen;
    }
};
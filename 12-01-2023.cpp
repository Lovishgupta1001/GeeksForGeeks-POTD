// User function Template for C++

class Solution
{
public:
    int minimizeSum(int N, vector<int> arr)
    {
        // code here
        int sum = 0;
        priority_queue<int, vector<int>, greater<int>> pq;
        for (auto it : arr)
            pq.push(it);
        int i = N;
        while (i != 1)
        {
            int a = pq.top();
            pq.pop();
            int b = pq.top();
            pq.pop();
            int c = a + b;
            sum += c;
            pq.push(c);
            --i;
        }
        return sum;
    }
};
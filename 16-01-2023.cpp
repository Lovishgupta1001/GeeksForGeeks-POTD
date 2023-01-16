// User Function Template for C++ solution

class Solution
{
public:
    vector<long long> nextLargerElement(vector<long long> &arr, int n)
    {
        // Your code here
        vector<long long> v;
        stack<long long> st;

        for (int i = n - 1; i >= 0; i--)
        {
            if (st.size() == 0)
                v.push_back(-1);
            else if (st.top() > arr[i] and st.size() > 0)
                v.push_back(st.top());
            else if (st.top() <= arr[i] and st.size() > 0)
            {
                while (st.size() > 0 and st.top() <= arr[i])
                    st.pop();
                if (st.size() == 0)
                    v.push_back(-1);
                else
                    v.push_back(st.top());
            }
            st.push(arr[i]);
        }
        reverse(v.begin(), v.end());
        return v;
    }
};
class Solution
{
public:
    string removePair(string s)
    {
        // code here
        stack<char> st;
        int n = s.size();
        if (n == 1)
            return s;

        st.push(s[0]);
        int i = 1;
        while (i < n)
        {
            if (st.size() == 0)
                st.push(s[i]);
            else if (st.top() == s[i])
                st.pop();
            else
                st.push(s[i]);
            i++;
        }
        string ans = "";
        while (!st.empty())
        {
            ans = st.top() + ans;
            st.pop();
        }
        if (ans.size() == 0)
            return "-1";
        return ans;
    }
};
/*

Definition for singly Link List Node
struct Node
{
    char data;
    Node* next;
    Node(int x) {  data = x;  next = NULL; }
};

You can also use the following for printing the link list.
printList(Node* node);
*/

class Solution
{
public:
    vector<Node *> findAnagrams(struct Node *head, string s)
    {
        // code here
        int n = s.size();
        Node *curr = head, *prev = head;
        vector<int> a(26), b(26);
        vector<Node *> ans;
        int len = 0;
        for (int i = 0; i < n; i++)
            a[s[i] - 'a']++;

        while (curr != NULL)
        {
            b[curr->data - 'a']++;
            len++;
            if (a == b)
            {
                ans.push_back(prev);
                prev = curr->next;
                curr->next = NULL;
                curr = prev;
                for (int i = 0; i < 26; i++)
                    b[i] = 0;
                len = 0;
            }
            else
            {
                curr = curr->next;
                if (len >= n)
                {
                    b[prev->data - 'a']--;
                    prev = prev->next;
                }
            }
        }
        return ans;
    }
};
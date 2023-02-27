class Solution
{
public:
    Node *reverse(Node *head, int k)
    {
        // code here
        Node *p = NULL;
        Node *c = head;
        Node *n;
        while (c && k--)
        {
            n = c->next;
            c->next = p;
            p = c;
            c = n;
        }
        head = p;
        p = NULL;
        c = n;
        while (c)
        {
            n = c->next;
            c->next = p;
            p = c;
            c = n;
        }
        Node *t = head;
        while (t->next)
            t = t->next;
        t->next = p;
        return head;
    }
};
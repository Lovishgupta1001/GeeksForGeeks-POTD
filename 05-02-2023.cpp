/* Linked List Node
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
}; */

class Solution
{
public:
    int intersectPoint(Node *head1, Node *head2)
    {
        // Your Code Here
        Node *p = head1;
        Node *q = head2;

        while (p != q)
        {
            if (p)
                p = p->next;
            else
                p = head2;
            if (q)
                q = q->next;
            else
                q = head1;
        }
        return p->data;
    }
};

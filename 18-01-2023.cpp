// User function Template for C++

/*struct Node
{
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }

*/
class Solution
{
public:
    // Function to find first node if the linked list has a loop.
    int findFirstNode(Node *head)
    {
        // your code here
        Node *slow = head;
        Node *fast = head;
        while (fast)
        {
            slow = slow->next;
            fast = fast->next->next;
            if (slow == fast)
                break;
        }
        if (!fast)
            return -1;
        while (head != slow)
        {
            head = head->next;
            slow = slow->next;
        }
        return head->data;
    }
};
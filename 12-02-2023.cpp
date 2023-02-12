// User function Template for C++

/*

class Node{
public:
    int val;
    Node *next;
    Node(int num){
        val=num;
        next=NULL;
    }
};

*/

class Solution
{
public:
    bool isprime(int n)
    {
        if (n <= 1)
            return false;
        for (int i = 2; i * i <= n; i++)
        {
            if (n % i == 0)
                return false;
        }
        return true;
    }
    Node *primeList(Node *head)
    {
        Node *temp = head;

        while (temp != NULL)
        {
            if (temp->val == 1)
                temp->val = 2;
            else
            {
                int prev = temp->val, next = temp->val, curr = temp->val;

                while (!isprime(prev))
                    prev--;
                while (!isprime(next))
                    next++;

                if (curr - prev > next - curr)
                    temp->val = next;
                else
                    temp->val = prev;
            }
            temp = temp->next;
        }
        return head;
    }
};
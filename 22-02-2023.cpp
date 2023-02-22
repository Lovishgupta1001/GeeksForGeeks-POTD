/* struct Node {
    int data;
    Node* left;
    Node* right;
    Node* nextRight;
};*/

class Solution
{
public:
    void connect(Node *root)
    {
        // Code Here
        queue<Node *> q;
        q.push(root);
        while (!q.empty())
        {
            int n = q.size();
            while (n--)
            {
                auto node = q.front();
                q.pop();
                if (n > 0)
                    node->nextRight = q.front();
                if (node->left)
                    q.push(node->left);
                if (node->right)
                    q.push(node->right);
            }
        }
    }
};

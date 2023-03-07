/* Tree node structure  used in the program
 struct Node
 {
     int data;
     Node* left, *right;
}; */

class Solution
{
public:
    /*You are required to complete below method */
    int maxLevelSum(Node *root)
    {
        // Your code here
        if (!root)
            return NULL;
        queue<Node *> q;
        int sum = INT_MIN;
        q.push(root);

        while (!q.empty())
        {
            int n = q.size();
            int ad = 0;
            while (n--)
            {
                Node *node = q.front();
                q.pop();
                ad += node->data;
                if (node->left)
                {
                    q.push(node->left);
                }
                if (node->right)
                {
                    q.push(node->right);
                }
            }
            sum = max(sum, ad);
        }
        return sum;
    }
};
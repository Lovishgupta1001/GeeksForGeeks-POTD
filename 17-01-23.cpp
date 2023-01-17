// User function Template for C++

/*
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
};
 */

class Solution
{
public:
    int ans = 0;
    int val = 0;
    int maxGCD(Node *root)
    {
        // code here
        if (!root)
            return ans;
        if (root->left and root->right)
        {
            int t = __gcd(root->left->data, root->right->data);
            if (t > ans)
            {
                ans = t;
                val = root->data;
            }
            else if (t == ans)
                val = max(val, root->data);
        }
        maxGCD(root->left);
        maxGCD(root->right);
        return val;
    }
};

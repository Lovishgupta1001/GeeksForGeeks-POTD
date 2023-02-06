// User function Template for C++
/*
struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/

class Solution
{
public:
    // int lvl=-1;
    Node *p = NULL;
    void fun(Node *root, map<int, vector<int>> &mp, int h)
    {
        if (root == NULL)
            return;
        mp[h].push_back(root->data);
        fun(root->left, mp, h - 1);
        fun(root->right, mp, h + 1);
    }
    void findnode(Node *root, int target)
    {
        if (root == nullptr)
            return;
        if (root->data == target)
        {
            p = root;
            return;
        }
        findnode(root->left, target);
        findnode(root->right, target);
    }
    long long int verticallyDownBST(Node *root, int target)
    {
        // Code here
        findnode(root, target);
        map<int, vector<int>> mp;
        int h = 0;
        fun(p, mp, h);
        if (p == NULL)
            return -1;
        vector<int> temp = mp[0];
        long long ans = 0;
        for (auto it : temp)
        {
            if (it == target)
                continue;
            ans += it;
        }
        return ans;
    }
};
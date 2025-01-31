#include <iostream>
#include <queue>
#include <vector>
#include <map>
using namespace std;
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
                                                       right(right) {}
};

void topView(TreeNode *root)
{
    queue<pair<TreeNode *, int>> q;
    map<int, int> m;
    q.push(make_pair(root, 0));
    while (!q.empty())
    {
        pair<TreeNode *, int> temp = q.front();
        q.pop();
        TreeNode *node = temp.first;
        int hd = temp.second;
        if (m.count(hd) == 0)
        {
            m[hd] = node->val;
        }
        if (node->left)
        {
            q.push(make_pair(node->left, hd - 1));
        }
        if (node->right)
        {
            q.push(make_pair(node->right, hd + 1));
        }
    }
    for (auto i : m)
    {
        cout << i.second << " ";
    }
    cout << endl;
}
int main()
{ 
  TreeNode *root = new TreeNode(1); 
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    root->right->left = new TreeNode(6);
    root->right->right = new TreeNode(7);
    topView(root);
    return 0;
}
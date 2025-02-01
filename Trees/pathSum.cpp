#include <iostream>
#include <vector>
#include <queue>
#include <stack>

using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

int transform(TreeNode *root)
{
    if (root == nullptr)
        return 0;
    int leftOld = transform(root->left);
    int rightOld = transform(root->right);
    int currOld = root->val;
    root->val = leftOld + rightOld;
    if (root->left != nullptr)
    {
        root->val += root->left->val;
    }
    if (root->right != nullptr)
    {
        root->val += root->right->val;
    }
    return currOld;
}

void preorder(TreeNode *root, vector<int> &res)
{
    if (root == nullptr)
    {
        return;
    }
    res.push_back(root->val);
    preorder(root->left, res);
    preorder(root->right, res);
}

vector<int> preorderTraversal(TreeNode *root)
{
    vector<int> res;
    preorder(root, res);
    return res;
}
void hasPathSum(TreeNode *root, int targetSum)
{
    transform(root);
    int currSum = root->val;
    cout << currSum << endl;
    if (currSum == targetSum)
    {
        cout << "True" << endl;
    }
    else
    {
        cout << "False" << endl;
    }
}
int main()
{
    TreeNode *root = new TreeNode(5);
    root->left = new TreeNode(4);
    root->right = new TreeNode(8);
    root->left->left = new TreeNode(11);
    root->left->right = new TreeNode(13);
    root->right->left = new TreeNode(4);
    root->right->right = new TreeNode(7);
    root->left->left->left = new TreeNode(7);
    root->left->left->right = new TreeNode(2);
    hasPathSum(root, 56); // should print true if there is a path sum of 22
    vector<int> res = preorderTraversal(root);
    for (int i = 0; i < res.size(); i++)
    {
        cout << res[i] << " ";
    }

    return 0;
}
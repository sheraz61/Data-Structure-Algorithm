#include <iostream>
#include <vector>
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
void postOrder(TreeNode* root, vector<int>& res) {
        if (root == nullptr) {
            return;
        }
        postOrder(root->left, res);
        postOrder(root->right, res);
        res.push_back(root->val);
    }
   
    vector<int> postorderTraversal(TreeNode* root) {
          vector<int> res;
        postOrder(root, res);
        return res;
    }
int main()
{
    TreeNode *root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    vector<int> res = postorderTraversal(root);
    for (int i = 0; i < res.size(); i++)
    {
        cout << res[i] << " ";
    }
    return 0;
}
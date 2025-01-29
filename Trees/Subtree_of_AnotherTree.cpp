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
  bool isIdentical(TreeNode* root1, TreeNode* root2) {
        if (root1 == nullptr && root2 == nullptr) {
            return true;
        } else if (root1 == nullptr || root2 == nullptr) {
            return false;
        }
        if (root1->val != root2->val) {
            return false;
        }
        return isIdentical(root1->left, root2->left) &&
               isIdentical(root1->right, root2->right);
    }
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if (root == nullptr && subRoot == nullptr) {
            return true;
        } else if (root == nullptr || subRoot == nullptr) {
            return false;
        }
        if (root->val == subRoot->val) {
            if (isIdentical(root, subRoot)) {
                return true;
            }
        }
        bool isLeft = isSubtree(root->left, subRoot);
        if (!isLeft) {
            return isSubtree(root->right, subRoot);
        }
        return true;
    }
int main()
{
    TreeNode *root = new TreeNode(3);
    root->left = new TreeNode(4);
    root->right = new TreeNode(5);
    root->left->left = new TreeNode(1);
    root->left->right = new TreeNode(2);
    TreeNode *subRoot = new TreeNode(4);
    subRoot->left = new TreeNode(1);
    subRoot->right = new TreeNode(2);
    cout << isSubtree(root, subRoot);
    return 0;
}
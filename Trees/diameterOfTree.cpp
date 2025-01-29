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
 int height(TreeNode* root) {
        if (root == nullptr) {
            return 0;
        }
        int lt = height(root->left);
        int rt = height(root->right);
        return max(lt, rt) + 1;
    }
    int diameterOfBinaryTree(TreeNode* root) {
        if (root == nullptr)
            return 0;
        int currD = height(root->left) + height(root->right)+1;
        int leftD = diameterOfBinaryTree(root->left);
        int rightD = diameterOfBinaryTree(root->right);
        return max(currD, max(leftD, rightD));
    }
int main()
{
    TreeNode *root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    cout << diameterOfBinaryTree(root);
    return 0;
}
#include<iostream>
#include<vector>
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
 int countNodes(TreeNode* root) {
        if (root == nullptr) {
            return 0;
        }
        int ls = countNodes(root->left);
        int rs = countNodes(root->right);
        return ls + rs + 1;
    }
int main(){
    TreeNode *root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    cout<<countNodes(root);
    return 0;
}
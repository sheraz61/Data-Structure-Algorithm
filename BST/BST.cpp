#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node* left;
    Node* right;
    Node(int val)
    {
        this->data = val;
        left = right = NULL;
    }
};
Node* insert(Node* root, int val)
{
    if (root == NULL)
    {
        root = new Node(val);
    }
    else if (val < root->data)
    {
        root->left = insert(root->left, val);
    }
    else
    {
        root->right = insert(root->right, val);
    }
    return root;
}
void inorder(Node* root)
{
    if (root == NULL)
    {
        return;
    }
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}
Node* buildBST(int arr[], int n)
{
    Node* root = NULL;
    for (int i = 0; i < n; i++)
    {
        root = insert(root, arr[i]);
    }
    return root;
}
int main()
{
    int arr[] = {5, 1, 3, 4, 2, 7, 6, 8};
    int n = sizeof(arr) / sizeof(arr[0]);
    Node* root = buildBST(arr, n);
    inorder(root);
    return 0;
}
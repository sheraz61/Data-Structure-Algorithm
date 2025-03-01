#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *left;
    Node *right;
    Node(int val)
    {
        this->data = val;
        left = right = NULL;
    }
};

Node *getInoderSuccessor(Node *root)
{
    while (root->left != NULL)
    {
        root = root->left;
    }
    return root;
}
Node *delNode(Node *root, int val)
{
    // Base Case
    if (root == NULL)
        return NULL;
    if (val < root->data)
    {
        root->left = delNode(root->left, val);
    }
    else if (val > root->data)
    {
        root->right = delNode(root->right, val);
    }
    else
    {
        if (root->left == NULL && root->right == NULL)
        {
            delete root;
            return NULL;
        }
        if (root->right == NULL || root->left)
        {
            return root->left == NULL ? root->right : root->left;
        }
        Node *IS = getInoderSuccessor(root->right);
        root->data = IS->data;
        root->right = delNode(root->right, IS->data);
        return root;
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
   int arr[] = {50, 30, 20, 40, 70, 60, 80};
    int n = sizeof(arr) / sizeof(arr[0]);
    Node* root = buildBST(arr, n);
    cout << "The tree before deleting 20 is: \n";
    inorder(root);
    cout << endl;
    root = delNode(root, 20);
    cout << "The tree after deleting 20 is: \n";
    inorder(root);
    cout << endl;
    return 0;
}
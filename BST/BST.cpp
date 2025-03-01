#include <iostream>
#include <vector>
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
Node *insert(Node *root, int val)
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
Node *buildBST(int arr[], int n)
{
    Node *root = NULL;
    for (int i = 0; i < n; i++)
    {
        root = insert(root, arr[i]);
    }
    return root;
}
void inorder(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

// Print in Range
void printInRange(Node *root, int st, int en)
{
    if (root == NULL)
    {
        return;
    }
    if (st <= root->data && root->data < en)
    {
        cout << root->data << " ";
        printInRange(root->left, st, en);
        printInRange(root->right, st, en);
    }
    else if (root->data < st)
    {
        printInRange(root->right, st, en);
    }
    else
    {
        printInRange(root->left, st, en);
    }
}
// inorder successor
Node *IS(Node *root)
{
    while (root->left != NULL)
    {
        root = root->left;
    }
    return root;
}
// root to leaf path
void printPath(vector<int> &path)
{
    for (int i = 0; i < path.size(); i++)
    {
        cout << path[i] << " ";
    }
    cout << endl;
}
void pathHelper(Node *root, vector<int> &path)
{
    if (root == NULL)
    {
        return;
    }
    path.push_back(root->data);
    if (root->left == NULL && root->right == NULL)
    {
        printPath(path);
        path.pop_back();
        return;
    }
    pathHelper(root->left, path);
    pathHelper(root->right, path);
    path.pop_back();
}
void rootToLeafPath(Node *root)
{
    vector<int> path;
    pathHelper(root, path);
}
// validate BST
bool validateHelper(Node *root, Node *min, Node *max)
{
    if (root == NULL)
    {
        return true;
    }
    if (min != NULL && root->data < min->data)
        return false;
    if (max != NULL && root->data > max->data)
        return false;
    return validateHelper(root->left, min, root) && validateHelper(root->right, root, max);
}
bool validateBST(Node *root)
{
    return validateHelper(root, NULL, NULL);
}

// sorted array to balanced BST
Node *buildBSTFromSortedArray(int arr[], int st, int en)
{
    if (st > en)
    {
        return NULL;
    }
    int mid = (st + en) / 2;
    Node *curr = new Node(arr[mid]);
    curr->left = buildBSTFromSortedArray(arr, st, mid - 1);
    curr->right = buildBSTFromSortedArray(arr, mid + 1, en);
    return curr;
}
// print to check BST
void preOrder(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << " ";
    preOrder(root->left);
    preOrder(root->right);
}
// convert BST to balanced BST
Node *buildBSTFromSortedVector(vector<int> arr, int st, int en)
{
    if (st > en)
    {
        return NULL;
    }
    int mid = (st + en) / 2;
    Node *curr = new Node(arr[mid]);
    curr->left = buildBSTFromSortedVector(arr, st, mid - 1);
    curr->right = buildBSTFromSortedVector(arr, mid + 1, en);
    return curr;
}
void getInorder(Node *root, vector<int> &nodes)
{
    if (root == NULL)
    {
        return;
    }
    getInorder(root->left, nodes);
    nodes.push_back(root->data);
    getInorder(root->right, nodes);
}
Node *balanceBST(Node *root)
{
    // get inorder
    vector<int> in;
    getInorder(root, in);
    // get size of array
    int n = in.size();
    // build balanced BST
    return buildBSTFromSortedVector(in, 0, n - 1);
}
// size of largest BST in BT
class Info
{
public:
    int size;
    int min;
    int max;
    bool isBST;
    Info(bool isBST, int min, int max, int size)
    {
        this->isBST = isBST;
        this->min = min;
        this->max = max;
        this->size = size;
    }
};
static int maxSize;
Info *largestBST(Node *root)
{
    if (root == NULL)
    {
        return new Info(true, INT16_MAX, INT16_MIN, 0);
    }
    Info *leftInfo = largestBST(root->left);
    Info *rightInfo = largestBST(root->right);
    int currMin = min(root->data, min(leftInfo->min, rightInfo->min));
    int currMax = max(root->data, max(leftInfo->max, rightInfo->max));
    int currSize = leftInfo->size + rightInfo->size + 1;
    if (leftInfo->isBST && rightInfo->isBST && root->data > leftInfo->max && root->data < rightInfo->min)
    {
        maxSize = max(maxSize, currSize);
        return new Info(true, currMin, currMax, currSize);
    }
    return new Info(false, currMin, currMax, currSize);
}
int main()
{
    int arr[] = {5, 1, 3, 4, 2, 7, 6, 8};
    int n = sizeof(arr) / sizeof(arr[0]);
    Node *root = buildBST(arr, n);
    inorder(root);
    cout << endl;
    //largest BST
    maxSize = 0;
    largestBST(root);
    cout << maxSize << endl;
    return 0;
}
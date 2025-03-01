#include<iostream>
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
bool search(Node* root,int key){
    if(root==NULL){
        return false;
    }
    if(root->data==key){
        return true;
    }
    if(root->data>key){
        return search(root->left,key);
    }
    return search(root->right,key);
}
int main(){
    Node* root = new Node(4);
    root->left = new Node(2);
    root->right = new Node(5);
    root->left->left = new Node(1);
    root->left->right = new Node(3);
    root->right->right = new Node(6);
    cout<<search(root,5)<<endl;
    
    return 0;
}
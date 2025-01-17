#include<iostream>
using namespace std;
class Node{
    public:
    Node* next;
    int data;
    Node(int data){
        this->data = data;
        next = NULL;
    }
    ~Node(){
        if(next!=NULL){
            delete next;
            next = NULL;
        }
    }
};
class List {
    Node* head;
    Node* tail;
    public:
    List(){
        head = NULL;
        tail = NULL;
    }
    void push_Front(int val){
        Node* newNode = new Node(val);
        if(head == NULL){
            head = newNode;
            tail = newNode;
        }else{
            newNode->next = head;
            head = newNode;
        }
    }
    void push_Back(int val){
        Node* newNode = new Node(val);
        if(head == NULL){
            head = newNode;
            tail = newNode;
        }else{
            tail->next = newNode;
            tail = newNode;
        }
    }
    void printList(){
        Node* temp = head;
        while(temp != NULL){
            cout<<temp->data<<" ";
            temp = temp->next;
        }
    }
    int Size(){
        int sz=0;
        Node* temp = head;
        while(temp!=NULL){
            sz++;
            temp = temp->next;
        }
        return sz;
    }
    void insert(int val,int pos){
        Node* newNode = new Node(val);
        if(pos == 0){
            newNode->next = head;
            head = newNode;
        } else if(pos > Size()){
            cout<<"Invalid position"<<endl;
            return;
        } else{
            Node* temp = head;
            for(int i=0;i<pos-1;i++){
                temp = temp->next;
            }
            newNode->next = temp->next;
            temp->next = newNode;
        }
    }
    void pop_Front(){
        if(head == NULL){
            cout<<"List is empty"<<endl;
            return;
        }
        Node* temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }
    void pop_back(){
        if(head == NULL){
            cout<<"List is empty"<<endl;
            return;
        }
        if(head->next == NULL){
            delete head;
            head = NULL;
            tail = NULL;
        } else{
            Node* temp = head;
            while(temp->next->next!= NULL){
                temp = temp->next;
            }
           
            temp->next = NULL;
            delete tail;
            tail = temp;
        }
    }
    int searchItr(int key){
        Node* temp = head;
        int pos = 0;
        while(temp!=NULL){
            if(temp->data == key){
                return pos;
            }
            temp = temp->next;
            pos++;
        }
        return -1;
    }
    int searchResHelper(Node* head,int key){
        if(head == NULL){
            return -1;
        }
        if(head->data == key){
            return 0;
        }
        int res = searchResHelper(head->next,key);
        if(res == -1){
            return -1;
        }
        return res+1;
    }
    int searchRes(int key){
        return searchResHelper(head,key);
    }
    void reverse(){
        Node* prev = NULL;
        Node* curr = head;
        Node* next = NULL;
        while(curr!=NULL){
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        head = prev;
    }
    void removeNth(int n){
        if(n == 0){
            pop_Front();
            return;
        }
        if(n >= Size()){
            cout<<"Invalid position"<<endl;
            return;
        }
        Node* temp = head;
        for(int i=0;i<n-1;i++){
            temp = temp->next;
        }
        Node* toDelete = temp->next;
        temp->next = temp->next->next;
        toDelete->next = NULL;
        delete toDelete;
    }
    ~List(){
        if(head!=NULL){
            delete head;
            head=NULL;
        }
    }
};
int main(){

}
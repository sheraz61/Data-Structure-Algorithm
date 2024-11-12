#include<iostream>
using namespace std;
const int size =5;
class stack{
    private:
    char arr[size];
    int top;
    public:
    stack():top(-1){}
    void push(char a){
        if(top>=size-1){
            cout<<"Stack overflow\n";
        }
        else
        top++;
        arr[top]=a;
    }
    int pop(){
        if(top==-1){
            cout<<"Stack is empty\n";
            return -1;
        }
        else{
        return arr[top--];
        }
    }
    bool is_empty(){
         if(top==-1) {
            return true;
         }
         return false;
    }
};

bool valid_Parenthesis(string str){
    stack s;
for(int i=0;i<str.length();i++){
    if(str[i]=='('||str[i]=='{'||str[i]=='['){
        s.push(str[i]);
    }else if(str[i]==')'){
        if(s.is_empty()||s.pop()!='('){
            return false;
        }
    }else if(str[i]=='}'){
        if(s.is_empty()||s.pop()!='{'){
            return false;
        }
    }else if(str[i]==']'){
        if(s.is_empty()||s.pop()!='['){
            return false;
        }
    }
}
return s.is_empty() ? true : false;    
}
int main(){
    string str;
    cout<<"Enter a string with parenthesis: ";
    getline(cin,str);
 bool value=valid_Parenthesis(str);
   if(value){
    cout<<"Valid Parenthesis\n";
   }else{
    cout<<"Not valid Parenthesis\n";
   }
   return 0;
}
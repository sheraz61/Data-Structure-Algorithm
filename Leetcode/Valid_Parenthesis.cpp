#include<iostream>
#include<stack>
using namespace std;

 bool isValid(string s) {
        stack<char> st;
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '(' || s[i] == '{' || s[i] == '[') {
                st.push(s[i]);
            } else {
                if (st.empty() || (s[i] == ')' && st.top() != '(') ||
                    (s[i] == '}' && st.top() != '{') ||
                    (s[i] == ']' && st.top() != '[')) {
                    return false;
                }
                st.pop();
            }
        }
        return st.empty();
    }
int main(){
    string str;
    cout<<"Enter a string with parenthesis: ";
    getline(cin,str);
 bool value=isValid(str);
   if(value){
    cout<<"Valid Parenthesis\n";
   }else{
    cout<<"Not valid Parenthesis\n";
   }
   return 0;
}
#include<iostream>
#include<regex>
#include<string>
using namespace std;
string defangIPaddr(string address) {
        string ans = "";
        for(auto i : address){
            if(i != '.')
                ans += i;
            else
                ans += "[.]";
        }
        return ans;
    }
int main(){
string address = "192.168.1.1";
cout<<defangIPaddr(address);
}
 
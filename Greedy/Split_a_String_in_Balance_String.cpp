#include<iostream>
using namespace std;
 int balancedStringSplit(string s) {
        int size_t =s.size();
        int counter = 0;
        int res = 0;
        for (int i = 0; i < size_t; i++) {
            if (s[i] == 'R') {
                counter++;
            } else {
                counter--;
            }
            if (counter == 0) {
                res++;
            }
        }

        return res;
    }
int main(){
 string s="RLRRLLRLRL";
    cout<<balancedStringSplit(s);
}
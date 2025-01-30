#include<iostream>
using namespace std;
int tilingPro(int n){
    if(n==0||n==1){
        return 1;
    }
    int ans1=tilingPro(n-1);
    int ans2=tilingPro(n-2);
    return ans1+ans2;
}
int main() {
 int n;
 cin>>n;
 cout<<tilingPro(n);
 return 0;
}
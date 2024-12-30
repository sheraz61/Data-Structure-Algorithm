#include<iostream>
using namespace std;
//Find total ways in which n friends can be paired up
//Each friend can only paired once
int friendPairing(int n){
    if(n==1|| n==2){
        return n;
    }
    //single                        //pair    
    return friendPairing(n-1)+(n-1)*friendPairing(n-2);
}
int main(){
int n=4;
cout<<friendPairing(n);
    return 0;
}
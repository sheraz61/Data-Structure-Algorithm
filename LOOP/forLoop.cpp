#include<iostream>
using namespace std;
int main(){
    // for(int num=1;num<=5;num++){
    //     cout<<num<<endl;
    // }
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    // for(int i=1;i<=num;i++){
    //     cout<<i<<" ";
    // }
    int sum=0;
    for(int i=1;i<=num;i++){
        sum+=i;
    }
    cout<<"The sum of numbers from 1 to "<<num<<" is: "<<sum<<endl;
    return 0;
}
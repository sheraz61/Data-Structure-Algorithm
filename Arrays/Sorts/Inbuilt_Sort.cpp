#include<iostream>
#include<algorithm>
using namespace std;
void print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";  //print sorted array
    }
}
int main(){
    int arr[]={1,2,5,3,7,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    // sort(arr,arr+n);
    // print(arr,n);
    sort(arr,arr+n,greater<int>());
    print(arr,n);
    return 0;
}
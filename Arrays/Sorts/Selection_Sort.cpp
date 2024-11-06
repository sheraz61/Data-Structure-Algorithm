#include<iostream>
using namespace std;
void print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";  //print sorted array
    }
}
void selectionSort(int arr[],int n){
for(int i=0;i<n-1;i++){
    int minidx=i;
    for(int j=i+1;j<n;j++){
        if(arr[j]<arr[minidx])
        minidx = j;
    }
    swap(arr[i],arr[minidx]);
}
print(arr,n);
}
int main(){
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr)/sizeof(arr[0]);
    selectionSort(arr,n);
    return 0;
}
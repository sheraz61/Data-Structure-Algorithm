#include<iostream>
using namespace std;
void printArray(int *arr,int n){
   for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";  //print sorted array
    }
}
void bubbleSort(int *arr , int n){
    // bruteforce

    // for(int i=0;i<n;i++){
    //     for(int j=0;j<n-i-1;j++){
    //         if(arr[j]>arr[j+1]){
    //             swap(arr[j],arr[j+1]);  //swap elements
    //         }
    //     }
    // }

    // more optimize code 
 for(int i=0;i<n;i++){
    bool isSwap = false;
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);  //swap elements
                isSwap=true;
            }
        }
        if(!isSwap){
            return;
        }
    }
 printArray(arr,n);
}
 int main(){
    int arr[]={5,4,1,3,2};
    int n=sizeof(arr)/sizeof(int);
    bubbleSort(arr,n);
 }
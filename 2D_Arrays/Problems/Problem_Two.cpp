// Print out the sum of numbers in second row of 2D array.
#include<iostream>
using namespace std;
void Sum_of_row(int mtx[][3],int n, int m){
    int sum=0;
for(int i=0;i<n;i++){
    sum+=mtx[1][i];
}
cout<<"Sum of Second Row is -> "<<sum<<endl;
}
int main(){
    int arr[][3]={{1,4,9},{11,4,3},{2,2,3}};
int n=3,m=3;

Sum_of_row(arr,n,m);
return 0;
}
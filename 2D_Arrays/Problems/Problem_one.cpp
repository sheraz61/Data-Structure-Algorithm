//Print the number of all 7's that are in the 2D array.
#include<iostream>
using namespace std;
void Count(int mtx[][3],int n,int m,int key){
    int count=0;
for(int i=0;i<n;i++ ){
    for(int j=0;j<m;j++){
        if(mtx[i][j]==key)
            count++;
    }
}
cout<<"Count value of "<<key<<" is -> "<<count<<endl;
}
int main(){
    int arr[][3]={{4,7,8},{8,8,7}};
    int n=2,m=3,key=7;
    Count(arr,n,m,key);
    return 0;
}
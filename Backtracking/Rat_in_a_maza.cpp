#include<iostream>
using namespace std;
int mazaPath(int maza[][4],int row,int col,string ans){
    int val1,val2;
    if(row==3 && col==3){
        cout<<ans<<endl;
        return 1;
    }
    if(row==4 || col==4){
        return 0;
    }
     if(maza[row][col]==0){
        return 0;
    }else{
        int val1=mazaPath(maza,row,col+1,ans+'R');
        int val2=mazaPath(maza,row+1,col,ans+'D');
    }
    return val1+val2;
}
int main(){
    int maza[][4]={
        {1,0,0,0},
        {1,1,0,1},
        {1,1,0,0},
        {0,1,1,1}
    };
    string ans="";
    int res=mazaPath(maza,0,0,ans);
}
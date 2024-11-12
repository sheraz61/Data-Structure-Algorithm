#include <iostream>
#include <cstring>
using namespace std;
void Print(char str[], int n){
for(int i=0; i<n; i++){
    cout<<str[i]<<" ";
}
cout<<"\n";
}
bool isPalinedrome(char str[], int n)
{
  int start=0,end=n-1;
  while(start<end){
   if(str[start]!=str[end]) return false;
    start++;
    end--;
  }
  return true;
}
int main()
{
    char word[] = "CAR";
   bool value= isPalinedrome(word, strlen(word));
   if(value){
    cout<<"Array is Valid Palinedrome"<<endl;
   }else{
    cout<<"Not valid Palinedrome"<<endl;
   }
}
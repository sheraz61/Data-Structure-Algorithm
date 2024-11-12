#include <iostream>
#include <cstring>
using namespace std;
void Print(char str[], int n){
for(int i=0; i<n; i++){
    cout<<str[i]<<" ";
}
cout<<"\n";
}
void ReverseArray(char str[], int n)
{
  int start=0,end=n-1;
  while(start<end){
    swap(str[start], str[end]);
    start++;
    end--;
  }
}
int main()
{
    char word[] = {'a','b','c','d','e'};
    ReverseArray(word, strlen(word));
   Print(word,strlen(word));
}
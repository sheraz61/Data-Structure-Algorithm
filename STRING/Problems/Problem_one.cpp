//count how many times lowercase vowels occured in string entered by the user
#include<iostream>
#include<string>
using namespace std;

int LowerCaseVowels(string str){
int count = 0;
if(str.length()<=0)  {
    cout<<"Invalid is less then 1 ";
    return count;
 }
for(int i=0; i<str.length();i++){
    if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u'){
        count++;
    }
}
return count;
}
 int main(){
string str;
cout<<"Give input:";
getline(cin,str);

int count=LowerCaseVowels(str);
cout<<"No of vowels in this string entered by the user :"<<count<<endl;
return 0;
 }
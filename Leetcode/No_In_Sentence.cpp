#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
 int mostWordsFound(vector<string>& sentences) {
           int max_length=0;
        for(const auto &s : sentences)
        {
            int length = count(s.begin(),s.end(),' ');
            max_length = max(max_length,length+1);  
        }
        return max_length;
    }
int main(){
vector<string> sentences = {"We will rock you","We will we will rock you"};
cout<<mostWordsFound(sentences);
}
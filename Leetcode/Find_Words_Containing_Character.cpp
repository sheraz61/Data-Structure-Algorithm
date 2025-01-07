#include<iostream> 
#include<vector> 
using namespace std;
 vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int> res;
        int i = 0;
        while (i < words.size()) {
            string word = words[i];
            for(int j=0;j<word.size();j++){
                if(word[j]==x){
                    res.push_back(i);
                    break;
                }
            }
            i++;
        }
        return res;
    }
    void printVector(vector<int> &res ){
        for(int i=0;i<res.size();i++){
            cout<<res[i]<<" ";
        }
        cout<<endl;
    }
int main(){
vector<string> words = {"abc","bcd","aaaa","cbc"};
char x= 'a';
vector<int> res=findWordsContaining(words,x);
printVector(res);
}
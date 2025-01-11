#include<iostream>
#include<vector>
using namespace std;
  vector<int> getConcatenation(vector<int>& nums) {
        //concate same vector
    nums.insert(nums.end(), nums.begin(), nums.end());
    return nums;
    }
int main(){
vector<int>nums={1,2,3,4};
  vector<int>result=getConcatenation(nums);
    for(int i=0;i<result.size();i++){
        cout<<result[i]<<" ";
    }
}
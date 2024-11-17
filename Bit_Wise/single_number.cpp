#include<iostream>
#include<vector>
using namespace std;
int singleNo(vector<int> nums){
     int ans=0;
        for(int i=0;i<nums.size();i++){
            ans=ans^nums[i];
        }
        return ans;
}
int main(){
vector<int> num={2,2,1};
cout<<singleNo(num);
}
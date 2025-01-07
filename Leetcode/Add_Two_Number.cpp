#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

// Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
// You may assume that each input would have exactly one solution, and you may not use the same element twice.
// You can return the answer in any order.
vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int ,int> num;
        int n=nums.size();
        for(int i=0;i<n;i++){
            num[nums[i]]=i;
        }
        for(int i=0;i<n;i++){
            int comp=target-nums[i];
            if(num.count(comp)&&num[comp]!=i){
                return {i,num[comp]};
            }
        }
        return {};
    }
int main(){
vector<int>nums={1,2,3,4,5,6,7,8,9,10};
  int target=15;
  vector<int> result=twoSum(nums,target);
  cout<<result[0]<<" "<<result[1];
  return 0;
 
}
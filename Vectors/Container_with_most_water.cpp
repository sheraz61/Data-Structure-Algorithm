#include <iostream>
#include <vector>
using namespace std;

int Container_with_Most_water(vector<int> nums) {
   int left=0,right=nums.size()-1,maxArea=0;
   while(left<right){
    int currentArea=min(nums[left],nums[right])*(right-left);
    maxArea = max(maxArea, currentArea);
    if(nums[left]<nums[right]){
        left++;
    }else{
        right--;
    }
   }
   return maxArea;
}

int main() {
    vector<int> set = {1,8,6,2,5,4,8,3,7};
    int ans = Container_with_Most_water(set);
   cout<<"answer is:"<<ans;
    return 0;
}

#include<iostream>
#include<vector>
using namespace std;

    int upperBound(vector<int>& nums, int target, int n) {
        int low = 0, high = n - 1;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (nums[mid] > target) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return low;
    }

    int main(){
  vector<int> nums={1,3,5,7,9,11,13,15,17,19};
  int target=15;
  int result=upperBound(nums,target,nums.size());
  cout<<result;
  return 0;
}
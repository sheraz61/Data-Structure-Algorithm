#include<iostream>
#include<vector>
using namespace std;
 int insertAtPostion(vector<int>& nums, int target, int n) {
        int low = 0, high = n - 1;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (nums[mid] >= target) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return low;
    }
int main(){
  vector<int> nums={1,2,4,7};
  int target=9;
  int result=insertAtPostion(nums,target,nums.size());
  cout<<result;
  return 0;
}
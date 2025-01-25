#include<iostream>
#include<vector>
using namespace std;
 int search(vector<int>& nums, int target) {
        int n = nums.size();
        int low = 0, high = n - 1;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (nums[mid] == target)
                return mid;
           else if (nums[low] <= nums[mid]) {
                if (nums[low] <= target && target <= nums[mid]) {
                    high = mid - 1;
                } else {
                    low = mid + 1;
                }
            } else {
                if (nums[mid] <= target && target <= nums[high]) {
                    low = mid + 1;
                } else {
                    high = mid - 1;
                }
            }
        }
        return -1;
    }
int main() {
  vector<int> nums = {4, 5, 6, 7, 0, 1, 2};
  int target = 0;
  int result = search(nums, target);
  if (result == -1)
    cout << "Element not found" << endl;
  else
    cout << "Element found at index " << result << endl;
  return 0;
}
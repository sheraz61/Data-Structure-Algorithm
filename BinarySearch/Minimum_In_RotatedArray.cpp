#include<iostream>
#include<vector>
using namespace std;
 int findMin(vector<int>& nums) {
        int n = nums.size();
        int low = 0, high = n - 1, ans = INT32_MAX;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            //optimization
            if (nums[low] <= nums[high]) {
                ans = min(ans, nums[low]);
                break;
            }
            if (nums[low] <= nums[mid]) {
                ans = min(ans, nums[low]);
                low = mid + 1;
            } else {
                ans = min(ans, nums[mid]);
                high = mid - 1;
            }
        }
        return ans;
    }
int main() {
    vector<int> nums = {4, 5, 6, 7, 0, 1, 2}; 
    cout<< findMin(nums) << endl; // Output: 0
    
    return 0;
}
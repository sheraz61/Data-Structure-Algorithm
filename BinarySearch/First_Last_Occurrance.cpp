  #include<iostream>
  #include<vector>
    using namespace std;
 int lowerBound(vector<int>& nums, int target, int n) {
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
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        int lb = lowerBound(nums, target, n);
        if (lb == n || nums[lb] != target)
            return {-1, -1};
        return {lb, upperBound(nums, target, n) - 1};
    }

    //Anoter Solution
    vector<int> search(vector<int>&nums,int target){
        int n=nums.size();
        int low=0,high=n-1;
        int first=-1,last=-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(nums[mid]==target){
                first=mid;
                high=mid-1;
            }
            else if(nums[mid]<target) low=mid+1;
            else high=mid-1;
        }
        low=0;
        high=n-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(nums[mid]==target){
                last=mid;
                low=mid+1;
            }
            else if(nums[mid]<target) low=mid+1;
            else high=mid-1;
        }
        return {first,last};
    }
    int main(){
        vector<int> nums = {5,7,7,8,8,10};
        int target = 8;
        vector<int> ans =search(nums, target);
        cout << ans[0] << " " << ans[1] << endl;
        return 0;
    }
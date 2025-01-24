#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void binary(vector<int> &nums, vector<int> &ans, int start, int end,
            int target)
{
    if (start > end)
        return;
    int mid = start + (end - start) / 2;
    if (nums[mid] == target)
    {
        binary(nums, ans, start, mid - 1, target);
        ans.push_back(mid);
        binary(nums, ans, mid + 1, end, target);
    }
    else if (nums[mid] > target)
    {
        binary(nums, ans, start, mid - 1, target);
    }
    else
    {
        binary(nums, ans, mid + 1, end, target);
    }
}
vector<int> targetIndices(vector<int> &nums, int target)
{
    sort(nums.begin(), nums.end());
    int n = nums.size();
    int low = 0, high = n - 1;
    vector<int> ans;
    binary(nums, ans, low, high, target);
    return ans;
}
int main()
{
    vector<int> nums = {1, 2, 3, 3, 3, 4, 5};
    vector<int> ans = targetIndices(nums, 3);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    return 0;
}
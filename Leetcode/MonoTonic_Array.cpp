#include <iostream>
#include <vector>
using namespace std;
bool isMonotonic(vector<int> &nums)
{
    int n = nums.size();
    if (n == 1)
        return true;
    bool isIncreasing = true;
    bool isDecreasing = true;
    for (int i = 0; i < n - 1; i++)
    {
        if (nums[i] > nums[i + 1])
        {
            isIncreasing = false;
        }
        if (nums[i] < nums[i + 1])
        {
            isDecreasing = false;
        }
    }
    bool ans = (isIncreasing || isDecreasing);
    return ans;
}
int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};
    cout << isMonotonic(arr) << endl; // Output: true
    return 0;
}
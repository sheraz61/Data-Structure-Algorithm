#include <iostream>
using namespace std;

void maxSubArraySum(int *arr, int n)
{
    int maxSum = INT32_MIN, currSum = 0;

    for (int i = 0; i < n; i++)
    {
        currSum += arr[i];
        maxSum = max(maxSum, currSum);
        if (currSum < 0)
        {
            currSum = 0;
        }
    }

    cout << "Maximum contiguous sum is " << maxSum << endl;
}

int main()
{
    int arr[] = {2, -3, 6, -5, 4, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    maxSubArraySum(arr, n);
    return 0;
}
#include <iostream>
using namespace std;

void maxSubArraySum(int *arr, int n)
{
  int maxSum = INT32_MIN;
  for (int start = 0; start < n; start++)
  {
    for (int end = start; end < n; end++)
    {
      int currentSum = 0;
      for (int i = start; i <= end; i++)
      {
        currentSum += arr[i];
      }
      cout << currentSum << " ";
      maxSum = max(maxSum, currentSum);
    }
    cout << endl;
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
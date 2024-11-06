#include <iostream>
using namespace std;
void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " "; // print sorted array
    }
}
void countingSort(int arr[], int n)
{
    int freq[10000] = {0};
    int minVal = INT16_MAX, maxVal = INT16_MIN;
    for (int i = 0; i < n; i++)
    {
        freq[arr[i]]++;
        minVal = min(minVal, arr[i]);
        maxVal = max(maxVal, arr[i]);
    }
    for (int i = minVal, j = 0; i <= maxVal; i++)
    {
        while (freq[i] > 0)
        {
            arr[j++] = i;
            freq[i]--;
        }
    }
    print(arr, n);
}
int main()
{
    int arr[] = {1, 4, 1, 3, 2, 4, 3, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    countingSort(arr, n);
    return 0;
}
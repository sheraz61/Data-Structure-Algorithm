#include <iostream>
using namespace std;
int binarySearch(int arr[], int start, int end, int target)
{
    int mid = (start + end) / 2;
    if (start > end)
    {
        return -1;
    }
    if (arr[mid] == target)
    {
        return mid;
    }
    else if (arr[mid] > target)
    {
        binarySearch(arr, start, mid - 1, target);
    }
    else
    {
        binarySearch(arr, mid + 1, end, target);
    }
}
int main()
{
    int arr[] = {1, 2, 3, 4, 7, 15,23,31,65,87,90};
    int n = sizeof(arr) / sizeof(arr[0]);
    int start = 0;
    int end = n - 1;
    int res=binarySearch(arr, start, end, 87);
    cout<<"Target found at this index: "<<res<<endl;
}
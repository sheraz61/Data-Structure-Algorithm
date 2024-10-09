#include <iostream>
using namespace std;

int main()
{

    // Reverse array Using Extra Space
    int arr[] = {4, 3, 6, 2, 1, 12};
    int n = sizeof(arr) / sizeof(arr[0]);
    //    int copyArr[n];
    //    for(int i=0; i<n; i++){
    //     int j=n-i-1;
    //     copyArr[j] = arr[i];
    //    }
    //    for(int i=0; i<n; i++){
    //     arr[i] = copyArr[i];
    //    }
    //    for(int i=0; i<n; i++){
    //     cout<<arr[i]<<" ";
    //    }

    // Reverse Array without using Extra Space
    int start = 0, end = n - 1;
    while (start < end)
    {
        // int temp = arr[start];
        // arr[start] = arr[end];
        // arr[end] = temp;

        // use build in swap function
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
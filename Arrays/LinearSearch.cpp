#include <iostream>
using namespace std;
int linearSearch(int *arr, int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int arr[] = {4, 3, 6, 2, 1, 12};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "key value present at this index:" << linearSearch(arr, n, 2);
    return 0;
}
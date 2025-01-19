#include <iostream>
using namespace std;
void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " "; // print sorted array
    }
    cout << endl;
}
int create_Prefix(int arr[], int n, int query1, int query2)
{
    int prefix[n + 1] = {0};
    for (int i = 1; i < n + 1; i++)
    {
        prefix[i] = prefix[i - 1] + arr[i - 1];
    }
    print(prefix, n + 1);
    int sum = 0;
    sum = prefix[query2 + 1] - prefix[query1];
    return sum;
}
int main()
{
    int arr[] = {3, 6, 2, 1, 8, 3, 5, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    int query1 = 2;
    int query2 = 6;
    cout << create_Prefix(arr, n, query1, query2);
}
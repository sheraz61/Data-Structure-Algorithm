#include <iostream>
using namespace std;
void print(int arr[][5], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}
void prefix_2D(int arr[][4], int n)
{
    int prefix[5][5] = {{0}};
    for (int i = 0; i < n ; i++)
    {
        for (int j = 0; j < n ; j++)
        {
            prefix[i+1][j+1] = arr[i][j] + prefix[i+1][j] + prefix[i][j+1] - prefix[i][j];
        }
    }
    print(prefix, n + 1);
}
int main()
{
    int arr[][4] = {{4, 2, 5, 15}, {12, 3, 2, 8}, {9, 6, 1, 7}, {3, 11, 7, 13}};
    int n = 4;
    prefix_2D(arr, n);
    return 0;
}
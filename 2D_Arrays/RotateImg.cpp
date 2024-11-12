#include <iostream>

using namespace std;
void Print(int arr[][3], int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }
}
void RotateImg(int arr[][3], int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            swap(arr[i][j], arr[j][i]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n / 2; j++)
        {
            swap(arr[i][j], arr[i][n - j - 1]);
        }
    }
    Print(arr,n,m);
}

int main()
{
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int n = 3, m = 3;
    Print(arr, n, m);
    cout << "\nAfter rotating 90 degrees clockwise:\n";
    RotateImg(arr, n, m);
    return 0;
}
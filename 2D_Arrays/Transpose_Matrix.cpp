#include <iostream>
using namespace std;
void Print(int arr[][2], int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}
void TransposeArray(int arr[][3], int n, int m)
{
    int transpose[3][2] = {{0}};
    // for (int i = 0; i < m; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         transpose[i][j] = arr[j][i];
    //     }
    // }
    // ANOTHER SOLUTION
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            transpose[j][i] = arr[i][j];
        }
    }
    Print(transpose, 3, 2);
}
int main()
{
    int arr[][3] = {{1, 2, 3}, {4, 5, 6}};
    int n = 2, m = 3;
    TransposeArray(arr, n, m);
}
#include <iostream>
using namespace std;
void diagonalSum(int mtx[][4], int n, int m)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (i == j)
            {
                sum += mtx[i][j];
            }
            else if (j == n - i - 1)
            {
                sum += mtx[i][j];
            }
        }
    }
    cout<<"Sum of Diagonal elements "<<sum<<endl;
}
int main()
{
    int arr[][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};
    int row = 4, col = 4;
    diagonalSum(arr, row, col);
    return 0;
}
#include <iostream>
using namespace std;
void spiralMatrix(int mtx[][4], int n, int m)
{
    int s_row = 0, s_col = 0;
    int e_row = n - 1, e_col = m - 1;
    while (s_row <= e_row && s_col <= e_col)
    {
        // Top
        for (int j = s_row; j <= e_col; j++)
        {
            cout << mtx[s_row][j] << " ";
        }
        // Right
        for (int j = s_row + 1; j <= e_row; j++)
        {
            cout << mtx[j][e_col] << " ";
        }
        // Buttom
        for (int j = e_col - 1; j >= s_col; j--)
        {
            if (s_row == e_row)
                break;
            cout << mtx[e_row][j] << " ";
        }
        // Left
        for (int j = e_row - 1; j >= s_row + 1; j--)
        {
            if (s_col == e_col)
                break;
            cout << mtx[j][s_col] << " ";
        }
        s_row++;
        s_col++;
        e_row--;
        e_col--;
    }
}
int main()
{
    int arr[][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};
    int row = 4, col = 4;
    spiralMatrix(arr, row, col);
    return 0;
}
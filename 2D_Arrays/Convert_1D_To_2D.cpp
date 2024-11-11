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
        cout << "\n";
    }
}

void Converstion(int arr[], int n, int m , int size){
 if ((n * m) != size)
    {
        cout << "Invalid size of 1D Array!" << endl;
        return ;
    }
    int sol[2][2] = {{0}};
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            sol[i][j] = arr[i * n + j];
        }
    }
    Print(sol, 2, 2);
}
int main()
{
    int arr[] = {1, 2, 3};
    int n = 2, m = 2;
    int size = sizeof(arr) / sizeof(arr[0]);
Converstion(arr,n,m,size);
    return 0;
}
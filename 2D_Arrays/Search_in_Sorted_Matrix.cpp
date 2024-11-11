#include <iostream>
using namespace std;
bool search(int mtx[][4], int n, int m, int key)
{
    int i = 0, j = m - 1;
    while (i < n && j >= 0)
    {
        if (mtx[i][j] == key)
        {
            cout << "Found at index (" << i<< "," << j <<")"<< endl;
            return true;
        }else if(mtx[i][j]>key){
            j--;
        }else{
            i++;
        }
    }
    cout<<"Key not Found"<<key<<endl;
    return false;
}
int main()
{
    int arr[][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};
    int row = 4, col = 4;
    search(arr,row,col,8);
    return 0;
}
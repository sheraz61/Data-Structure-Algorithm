//count of all solutions
// #include <iostream>
// #include <vector>
// using namespace std;
// void printBoard(vector<vector<char>> board)
// {
//     for (int i = 0; i < board.size(); i++)
//     {
//         for (int j = 0; j < board[i].size(); j++)
//         {
//             cout << board[i][j] << " ";
//         }
//         cout << endl;
//     }

//     cout << "-------------" << endl;
// }
// bool isSafe(vector<vector<char>>& board, int row, int col) // 2 //2
// {
//     int n = board.size();
//     // horizontal check
//     for (int j = 0; j < n; j++)
//     {
//         if (board[row][j] == 'Q')
//         {
//             return false;
//         }
//     }
//     // vertical check 2,2
//     for (int i = 0; i < row; i++)
//     {
//         if (board[i][col] == 'Q')
//         {
//             return false;
//         }
//     }
//     // top left diagonal check
//     for (int i = row, j = col; i >= 0 && j >= 0; i--, j--)
//     {
//         if (board[i][j] == 'Q')
//         {
//             return false;
//         }
//     }
//     // top right diagonal check
//     for (int i = row, j = col; i >= 0 && j < n; i--, j++)
//     {
//         if (board[i][j] == 'Q')
//         {
//             return false;
//         }
//     }
//     return true;
// }
// int nQueens(vector<vector<char>> board, int row)
// {
//     int n = board.size();
//     if (row == n)
//     {
//         printBoard(board);
//         return 1;
//     }
//     int count=0;
//     for (int j = 0; j < n; j++)
//     {
//         if (isSafe(board, row, j))
//         {
//             board[row][j] = 'Q';
//           count+=  nQueens(board, row + 1);
//             board[row][j] = '.'; // backtrack, reset the cell to empty.
//         }
//     }
//     return count;
// }
// int main()
// {
//     vector<vector<char>> board;
//     int n = 4;
//     for (int i = 0; i < n; i++)
//     {
//         vector<char> newBoard;
//         for (int j = 0; j < n; j++)
//         {
//             newBoard.push_back('.');
//         }
//         board.push_back(newBoard);
//     }
//     int count=nQueens(board, 0);
//     cout<<"Count of all solution is : "<<count;
//     return 0;
// }

//Print any one solution 

#include <iostream>
#include <vector>
using namespace std;
void printBoard(vector<vector<char>> board)
{
    for (int i = 0; i < board.size(); i++)
    {
        for (int j = 0; j < board[i].size(); j++)
        {
            cout << board[i][j] << " ";
        }
        cout << endl;
    }

    cout << "-------------" << endl;
}
bool isSafe(vector<vector<char>>& board, int row, int col) // 2 //2
{
    int n = board.size();
    // horizontal check
    for (int j = 0; j < n; j++)
    {
        if (board[row][j] == 'Q')
        {
            return false;
        }
    }
    // vertical check 2,2
    for (int i = 0; i < row; i++)
    {
        if (board[i][col] == 'Q')
        {
            return false;
        }
    }
    // top left diagonal check
    for (int i = row, j = col; i >= 0 && j >= 0; i--, j--)
    {
        if (board[i][j] == 'Q')
        {
            return false;
        }
    }
    // top right diagonal check
    for (int i = row, j = col; i >= 0 && j < n; i--, j++)
    {
        if (board[i][j] == 'Q')
        {
            return false;
        }
    }
    return true;
}
bool nQueens(vector<vector<char>> board, int row)
{
    int n = board.size();
    if (row == n)
    {
        printBoard(board);
        return true;
    }
    int isFalse=false;
   
    for (int j = 0; j < n; j++)
    {
        if(isFalse==false){

        if (isSafe(board, row, j))
        {
            board[row][j] = 'Q';
         isFalse =   nQueens(board, row + 1);
            board[row][j] = '.'; // backtrack, reset the cell to empty.
        }
        }
    }
    
return isFalse;
}
int main()
{
    vector<vector<char>> board;
    int n = 4;
    for (int i = 0; i < n; i++)
    {
        vector<char> newBoard;
        for (int j = 0; j < n; j++)
        {
            newBoard.push_back('.');
        }
        board.push_back(newBoard);
    }
    nQueens(board, 0);
    return 0;
}
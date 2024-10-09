#include <iostream>
using namespace std;
int main()
{
    int n = 5;
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= i ; j++)
    //     {
    //         cout << "*" << " ";
    //     }
    //     cout << endl;
    // }

    // Inverted Star Pattern
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= n - i + 1; j++)
    //     {
    //         cout << "*" << " ";
    //     }
    //     cout << endl;
    // }
    // Half Pyramid Pattern

    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout << j << " ";
    //     }
    //     cout << endl;
    // }

    // Character Pyramid Pattern
    //         char ch = 'A';
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout << ch << " ";
    //         ch=ch + 1;
    //     }
    //     cout << endl;
    // }

    // Hollow Rectangle Pattern

    // for (int i = 1; i <= n; i++)
    // {
    //     cout << "* "; // First Star of the row
    //     for (int j = 1; j <= n - 1; j++)
    //     {
    //         if (i == 1 || i == n)
    //         {
    //             cout << "*" << " ";
    //         }
    //         else
    //         {
    //             cout << " " << " ";
    //         }
    //     }
    //     cout << "*" << endl; // Last Star of the row
    // }

    // Inverted & Rotated Half pyramid

    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= n - i; j++)
    //     {
    //         cout << " ";
    //     }
    //     for (int k = 1; k <= i; k++)
    //     {
    //         cout << "*";
    //     }
    //     cout << endl;
    // }

    // Floyd's Triangle
    // int num = 1;
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout << num << " ";
    //         num = num + 1;
    //     }
    //     cout << endl;
    // }

    // Daimond Pattern
    // First Pyramid
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= n - i; j++)
    //     {
    //         cout << " " << " ";
    //     }
    //     for (int k = 1; k <= 2 * i - 1; k++)
    //     {
    //         cout << "*" << " ";
    //     }
    //     cout << endl;
    // }
    // 2nd Pyramid
    // for (int L = n; L >= 1; L--)
    // {
    //     for (int M = 1; M <= n - L; M++)
    //     {
    //         cout << " " << " ";
    //     }
    //     for (int N = 1; N <= 2 * L - 1; N++)
    //     {
    //         cout << "*" << " ";
    //     }
    //     cout << endl;
    // }

    // Butterfly Pattern

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*" << " ";
        }
        for (int k = 1; k <= 2 * (n - i); k++)
        {
            cout << " " << " ";
        }
        for (int L = 1; L <= i; L++)
        {
            cout << "*" << " ";
        }
        cout << endl;
    }
    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*" << " ";
        }
        for (int k = 1; k <= 2 * (n - i); k++)
        {
            cout << " " << " ";
        }
        for (int L = 1; L <= i; L++)
        {
            cout << "*" << " ";
        }
        cout << endl;
    }
    return 0;
}
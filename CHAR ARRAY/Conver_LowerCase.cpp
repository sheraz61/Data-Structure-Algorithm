#include <iostream>
#include <cstring>
using namespace std;
void toUpperCase(char str[], int n)
{
    for (int i = 0; i < n; i++)
    {
        char ch = str[i];

        if (ch >= 'a' && ch <= 'z')
        {
            continue;
        }
        else
        {
            str[i] = (ch - 'A') + 'a';
        }
    }
}
int main()
{
    char word[] = "ApPle";
    toUpperCase(word, strlen(word));
    cout<<word<<endl;
}
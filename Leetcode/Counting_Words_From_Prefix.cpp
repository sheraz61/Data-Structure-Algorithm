#include <iostream>
#include <vector>
using namespace std;
int prefixCount(vector<string> &words, string pref)
{
    int i = 0;
    int count = 0;
    while (i < words.size())
    {
        string str = words[i];
        if (str.size() < pref.size())
        {
            i++;
            continue;
        }
        else
        {
            bool find = false;
            for (int j = 0; j < pref.size(); j++)
            {
                if (str[j] == pref[j])
                {
                    find = true;
                }
                else
                {
                    find = false;
                    break;
                }
            }
            if (find == true)
            {
                count++;
            }
        }
        i++;
    }
    return count;
}
int main()
{
    vector<string> words = {"apple", "banana", "cherry", "date", "elderberry"};
    string pref = "ch";
    int count = prefixCount(words, pref);
    cout << "Number of words starting with " << pref << ": " << count << endl;
    return 0;
}
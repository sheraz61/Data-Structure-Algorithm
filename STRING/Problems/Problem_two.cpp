#include <string>
#include <iostream>
using namespace std;
bool areAlmostEqual(string s1, string s2)
{
    if (s1.length() != s2.length())
    {
        return false;
    }

    char diffChar1, diffChar2;
    int diff = 0;
    for (int i = 0; i < s1.length(); i++)
    {
        if (s1[i] != s2[i])
        {
            if (!diff)
            {
                diffChar1 = s1[i];
                diffChar2 = s2[i];
            }
            else
            {
                if (s1[i] != diffChar2 || s2[i] != diffChar1)
                {
                    return false;
                }
            }

            diff++;
        }

        if (diff > 2)
        {
            return false;
        }
    }

    if (diff == 1)
    {
        return false;
    }

    return true;
}
int main()
{
    string s1="bank",s2="kanb";
    bool diff= areAlmostEqual(s1,s2);
    if(diff){
        cout<<"Strings are almost equal"<<endl;
    }else{
        cout<<"Strings are not almost equal"<<endl;
    }

    return 0;
}
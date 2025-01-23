#include <iostream>
#include <string>
#include <vector>
using namespace std;
 string getSmallestString(int n, int k) {
        string res(n,'a');
        k -= n;
        
        while(k > 0){
            res[--n] += min(25, k);
            k -= min(25, k);
        }
        return res;
    }
int main()
{
    int  n = 5, k = 73;

    cout << "String built form this value :" << getSmallestString(n, k) << endl;
}
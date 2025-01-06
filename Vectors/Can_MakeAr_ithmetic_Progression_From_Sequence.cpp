#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
// A sequence of numbers is called an arithmetic progression if the difference between any two consecutive elements is the same.
// Given an array of numbers arr, return true if the array can be rearranged to form an arithmetic progression. Otherwise, return false.
 bool canMakeArithmeticProgression(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        int diff = arr[1] - arr[0];
        int state=true;
        int i=2;
        if(arr.size()==2){
            return true;
        }
       while(i<arr.size()){
            if ((arr[i] - arr[i-1]) == diff) {
                state =true;
            }else{
                return false;
            }
            i++;
        }
        return state;
    }
int main(){
vector<int> arr={1,2,3,4,5,6,7,8,9,10,11};
    cout<<canMakeArithmeticProgression(arr);
    return 0;
 }


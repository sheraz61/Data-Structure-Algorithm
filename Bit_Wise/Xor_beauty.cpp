#include<iostream>
#include<vector>
using namespace std;
int xorBeauty(vector<int>& nums) {
        int a = 0, b = 0;
        for (int i = 0; i < nums.size(); i++) {
            a = a | nums[i];  //00000001 | 00000100 ->00000101 -> 
            b = b ^ nums[i];  //00000001 ^ 00000100 ->00000101 ->
        }
        return (a & b);
    }
int main(){
vector<int> num={1,4};   
cout<<xorBeauty(num);
}
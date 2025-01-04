#include <iostream>
#include <vector>
using namespace std;
int arraySign(vector<int> &nums)
{
    int i, count_neg = 0;
    for (i = 0; i < nums.size(); i++)
    {
        if (nums[i] == 0)
            return 0;
        else if (nums[i] < 0)
            count_neg++;
    }
    if (count_neg % 2 == 0)
        return 1;
    else
        return -1;
}
int main()
{
    vector<int> nums = {1, 2, 3, 4, -5, -6, -7, -8, -9, 10, 11, 12, 13};
    int result = arraySign(nums);
    if(result==-1){
        cout<<"The array has negative numbers."<<endl;
    }else if(result==1){
        cout<<"The array has positive numbers."<<endl;
    }else{
        cout<<"The array has no positive numbers."<<endl;
    }
   return 0;
}
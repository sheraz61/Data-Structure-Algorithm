#include <iostream>
using namespace std;
void trap(int *height, int n)
{
    int leftMax[20000], rightMax[20000];
    leftMax[0] = height[0];
    rightMax[n - 1] = height[n - 1];
    for (int i = 1; i < n; i++)
    {
        leftMax[i] = max(leftMax[i - 1], height[i - 1]);
    }
    for (int i = n - 2; i >= 0; i--)
    {
        rightMax[i] = max(rightMax[i + 1], height[i + 1]);
    }
    int waterTrapped = 0;
    for (int i = 0; i < n; i++)
    {
        int currWater = min(leftMax[i], rightMax[i]) - height[i];
        if (currWater > 0)
        {
            waterTrapped += currWater;
        }
    }
    cout << "Water Trapperd:" << waterTrapped << endl;
}
int main()
{
    int height[] = {4, 2, 0, 6, 3, 2, 5};
    int n = sizeof(height) / sizeof(int);
    trap(height, n);
}
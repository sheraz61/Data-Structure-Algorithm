#include <iostream>
#include <vector>
using namespace std;

vector<int> set_missMatch(vector<int> nums) {
    int n = nums.size();
    vector<int> ans(n + 1, 0); // To count occurrences of numbers from 1 to n
    int dep = -1, miss = -1;

    // Count occurrences of each number
    for (int i = 0; i < n; i++) {
        ans[nums[i]]++;
    }

    // Identify duplicate and missing numbers
    for (int i = 1; i <= n; i++) { // Numbers range from 1 to n
        if (ans[i] == 2) {
            dep = i; // Duplicate number
        } else if (ans[i] == 0) {
            miss = i; // Missing number
        }
    }

    return {dep, miss};
}

int main() {
    vector<int> set = {2, 2};
    vector<int> ans = set_missMatch(set);
    cout << "Mismatched element is " << ans[0] << ", Missing element is " << ans[1] << endl;
    return 0;
}

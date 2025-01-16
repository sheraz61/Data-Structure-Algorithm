#include<iostream>
#include<stack>
#include<vector>
using namespace std;
   bool isPalindrome( head) {
        vector<int> vec;
        while (head) {
            vec.push_back(head->val);
            head = head->next;
        }

        int left = 0, right = vec.size() - 1;
        while (left < right && vec[left] == vec[right]) {
            left++;
            right--;
        }
        return left >= right;
    }
    int main(){
        return 0;
    }
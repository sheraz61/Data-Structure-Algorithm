  bool isPalindrome(ListNode* head) {
        if (!head || !head->next) return true;
        stack<int> s;
        ListNode* slow = head;
        ListNode* fast = head;
        // Push only first half elements to stack
        while (fast && fast->next) {
            s.push(slow->val);
            slow = slow->next;
            fast = fast->next->next;
        }
        // If odd length, skip middle element
        if (fast) {
            slow = slow->next;
        }
        // Compare remaining elements with stack
        while (slow) {
            if (slow->val != s.top()) return false;
            s.pop();
            slow = slow->next;
        }
        
        return true;
    }
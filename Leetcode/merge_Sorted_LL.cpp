 ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* dummy = new ListNode();
        ListNode* current = dummy;
        ListNode* i = list1;
        ListNode* j = list2;
        while (i != nullptr && j != nullptr) {
            if (i->val <= j->val) {
                current->next = i;
                i = i->next;
            } else {
                current->next = j;
                j = j->next;
            }
            current = current->next;
        }
        while (i != nullptr) {
            current->next = i;
            i = i->next;
            current = current->next;
        }
        while (j != nullptr) {
            current->next = j;
            j = j->next;
            current = current->next;
        }

        ListNode* result = dummy->next;
        delete dummy; 
        return result;
    }
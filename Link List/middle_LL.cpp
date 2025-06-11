Middle of Link list:

Given the head of a singly linked list, return the middle node of the linked list.
If there are two middle nodes, return the second middle node.

ListNode* middleNode(ListNode* head) {
        // BASE CONDITION:
        if(head== nullptr || head->next == nullptr)
        return head;
        ListNode * slow=head, *fast= head;
        while(fast!= nullptr && fast->next!= nullptr){
            slow= slow->next;
            fast= fast->next->next;
        }
        return slow;
}

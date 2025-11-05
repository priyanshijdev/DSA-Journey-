

25. Reverse Nodes in k-Group
Given the head of a linked list, reverse the nodes of the list k at a time, and return the modified list.

k is a positive integer and is less than or equal to the length of the linked list. 
  If the number of nodes is not a multiple of k then left-out nodes, in the end, should remain as it is.


Input: head = [1,2,3,4,5], k = 2
Output: [2,1,4,3,5]
  
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* temp = head;
        for(int i=0; i<k; i++){
            if(temp == nullptr) return head;
            temp= temp->next;
        }
        ListNode* curr= head;
        ListNode* prev= nullptr;
        ListNode* next= nullptr;

        for(int i=0; i<k;i++){
            next = curr->next;
            curr->next = prev;
            prev=  curr;
            curr = next;
        }
        head->next = reverseKGroup(curr, k);
        return prev;
    }
};

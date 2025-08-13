328. Odd Even Linked List

Given the head of a singly linked list, group all the nodes with odd indices together followed by the nodes with even indices, and return the reordered list.
The first node is considered odd, and the second node is even, and so on.
Note that the relative order inside both the even and odd groups should remain as it was in the input.

  Input: head = [1,2,3,4,5]
Output: [1,3,5,2,4]

     if  (head == nullptr || head->next == nullptr) return head;
      ListNode * odd= head;
      ListNode* even = head->next;
      ListNode* prev= even;

      while(even != nullptr && even->next!= nullptr){
        odd->next = even->next;
        odd= odd->next;
        even->next= even->next->next;
        even = even->next;
      }
      odd->next=prev;
      return head;

  

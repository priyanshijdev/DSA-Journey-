LC: 2095

You are given the head of a linked list. Delete the middle node, and return the head of the modified linked list.

The middle node of a linked list of size n is the ⌊n / 2⌋th node from the start using 0-based indexing, where ⌊x⌋ denotes the largest integer less than or equal to x.

For n = 1, 2, 3, 4, and 5, the middle nodes are 0, 1, 1, 2, and 2, respectively.
 

Example 1:


Input: head = [1,3,4,7,1,2,6]
Output: [1,3,4,1,2,6]


    ListNode* deleteMiddle(ListNode* head) {
        if (head->next == nullptr)
        return nullptr;

    int count = 0;
    ListNode *p1 = head, *p2 = head;
    while (p1 != nullptr) {
        count++;
        p1 = p1->next;
    }
    int middleIndex = count / 2;

    // Second pass, let 'p2' move toward the predecessor
    for (int i = 0; i < middleIndex - 1; ++i)
        p2 = p2->next;

    p2->next = p2->next->next;
    return head;
    }
};

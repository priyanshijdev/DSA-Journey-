                                                                find length of link list:
Input Format: 0->1->2
Result: 3

  Node* temp = head;
    int cnt = 0;
    // Traverse the linked list and count nodes
    while (temp != NULL) {
        temp = temp->next;
        cnt++; // increment cnt for every node traversed
    }
    return cnt;
}





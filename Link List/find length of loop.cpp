int findLength(Node* slow, Node* fast){

    int cnt = 1;
    
    // move fast by one step
    fast = fast->next;
    
    // traverse fast till it 
    // reaches back to slow
    while(slow!=fast){
        
        // at each node increase
        // count by 1 and move fast
        // forward by one step
        cnt++;
        fast = fast->next;
    }
    
    // loop terminates when fast reaches
    // slow again and the count is returned
    return cnt;
}
// Function to find the length
// of the loop in a linked list
int lengthOfLoop(Node* head) {
    Node* slow = head;
    Node* fast = head;

    // Step 1: Traverse the list to detect a loop
    while (fast != nullptr && fast->next != nullptr) {
        // Move slow one step
        slow = slow->next;     
        // Move fast two steps
        fast = fast->next->next;

        // Step 2: If the slow and fast pointers
        // meet, there is a loop
        if (slow == fast) {
            // return the number of nodes
            // in the loop
            return findLength(slow, fast);
        }
    }

    // Step 3: If the fast pointer
    // reaches the end, there is no loop
    return 0; 
}

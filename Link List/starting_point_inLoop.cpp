Node* slow = head;  
    Node* fast = head;  

while (fast != NULL && fast->next != NULL) {
        
        // Move slow one step
        slow = slow->next;        
        
        // Move fast two steps
        fast = fast->next->next;  
        if (slow == fast) {
    
            slow = head; 

            while (slow != fast) {
                
                slow = slow->next;  
                fast = fast->next;  
            }
            
            return slow;  
        }
    }
    
    return NULL; 

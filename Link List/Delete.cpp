
class Solution {
public:
    void deleteNode(ListNode* node) {
      // in short   copy the  value then attach the link 
      ListNode* temp = node->next;
      node->val= node->next->val; // copy like(4 1  1 9)
      node->next= node->next->next ; 
      delete temp; 
    }
};

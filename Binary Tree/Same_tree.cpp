Lc:100 Given the roots of two binary trees p and q, write a function to check if they are the same or not.

Two binary trees are considered the same if they are structurally identical, and the nodes have the same value.

O(n ), O(n)

    bool isSameTree(TreeNode* p, TreeNode* q) {
        // base condition:
        if(p ==  nullptr || q== nullptr) {return p==q;}

        return (p->val == q->val) && 
        isSameTree(p->left, q->left)  &&
        isSameTree(p->right, q->right);
    }
};

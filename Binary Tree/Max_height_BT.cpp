Input: root = [3,9,20,null,null,15,7]
Output: 3

recursive way:

 if(!root) return 0;
       int maxLeft=  maxDepth(root->left);
        int rightLeft=  maxDepth(root->right);
        return max(maxLeft, maxRight)+1;

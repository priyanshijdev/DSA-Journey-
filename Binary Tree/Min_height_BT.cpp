Input: root = [3,9,20,null,null,15,7]
Output: 2

    int minDepth(TreeNode* root) {
      if(!root) return 0;

    int left=   minDepth(root->left);
    int right=   minDepth(root->right);

    if(left ==0 || right ==0) 
    return max(left, right) +1;

     return min(left, right) +1;
    }


TreeNode* invertTree(TreeNode* root) {
    if(root==NULL){return root;}
    TreeNode* temp = new TreeNode();
    invertTree(root->left);
    invertTree(root->right);
    temp = root->left;
    root->left=root->right;
    root->right = temp;
    return root;
}
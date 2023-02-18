class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        if(root!=NULL){
            TreeNode* ans = root->left;
            root->left=root->right;
            root->right=ans;
            invertTree(root->left);
            invertTree(root->right);
        }
        return root;
    }
};
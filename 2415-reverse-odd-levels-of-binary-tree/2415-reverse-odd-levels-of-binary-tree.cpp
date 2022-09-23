/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void dfs(TreeNode* rootLeft,TreeNode* rootRight,int level){
        if(rootLeft==NULL or rootRight==NULL){
            return;
        }
        
        if(level&1){
            int val=rootLeft->val;
            rootLeft->val=rootRight->val;
            rootRight->val=val;
        }
        
        dfs(rootLeft->left,rootRight->right,level+1);
        dfs(rootLeft->right,rootRight->left,level+1);
        return;
    }
    
    TreeNode* reverseOddLevels(TreeNode* root) {
        dfs(root->left,root->right,1);
        return root;
    }
};
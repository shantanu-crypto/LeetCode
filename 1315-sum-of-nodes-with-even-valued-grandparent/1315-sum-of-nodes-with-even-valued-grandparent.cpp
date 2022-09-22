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
    int sum=0;
    void traversal(TreeNode* root,TreeNode* parent,TreeNode* grandParent){
        if(!root) return;
        
        if(grandParent!=NULL && grandParent->val%2==0){
            sum+=root->val;
        }
        traversal(root->left,root,parent);
        traversal(root->right,root,parent);
        return;
    }
    
    int sumEvenGrandparent(TreeNode* root) {
        traversal(root,NULL,NULL);
        return sum;
    }
};
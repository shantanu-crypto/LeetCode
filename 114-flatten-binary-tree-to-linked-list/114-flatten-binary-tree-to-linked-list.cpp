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
    vector<int> v;
    
    void preOrder(TreeNode* root){
        if(!root) return;
        
        v.push_back(root->val);
        preOrder(root->left);
        preOrder(root->right);
        return;
        
    }
    
    void flatten(TreeNode* root) {
        preOrder(root);
        if(root!=NULL){
        root->left=root->right=NULL;
        TreeNode* head=root;
        head->val=v[0];
        for(int i=1;i<v.size();i++){
            TreeNode* ans=new TreeNode(v[i]);
            head->left=NULL;
            head->right=ans;
            head=ans;
        }
        }
    }
};
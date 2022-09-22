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
    
    void inOrder(TreeNode* root,vector<int> &v){
        if(!root) return;
        
        inOrder(root->left,v);
        v.push_back(root->val);
        inOrder(root->right,v);
        
        return;
    }
    
    TreeNode* balanced(int start,int end,vector<int> &v){
        if(start>end) return NULL;
        
        int mid=(start+end)/2;
        TreeNode* root=new TreeNode(v[mid]);
        root->left=balanced(start,mid-1,v);
        root->right=balanced(mid+1,end,v);
        
        return root;
    }
    TreeNode* balanceBST(TreeNode* root) {
        vector<int> v;
        inOrder(root,v);
        return balanced(0,v.size()-1,v);
    }
};
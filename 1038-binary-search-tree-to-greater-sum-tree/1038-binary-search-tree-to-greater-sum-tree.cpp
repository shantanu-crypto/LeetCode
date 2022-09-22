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
    map<int,int> mp;
    void inOrder(TreeNode* root,vector<int> &v){
        if(!root) return;
        
        inOrder(root->left,v);
        v.push_back(root->val);
        inOrder(root->right,v);
        
        return;
    }
    
    void update(TreeNode* root){
        if(!root) return;
        
        update(root->left);
        root->val=mp[root->val];
        update(root->right);
        return;
    }
    
    TreeNode* bstToGst(TreeNode* root) {
        vector<int> v;
        inOrder(root,v);
        reverse(v.begin(),v.end());
        vector<int> vec(v);
        mp[vec[0]]=v[0];
        for(int i=1;i<v.size();i++){
            v[i]=v[i-1]+v[i];
            mp[vec[i]]=v[i];
        }
        update(root);
        return root;
    }
};
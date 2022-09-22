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
    
    void inOrder(TreeNode* root1,vector<int>& v){
        if(!root1) return;
        
        inOrder(root1->left,v);
        v.push_back(root1->val);
        inOrder(root1->right,v);
        return;
    }
    
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        vector<int> v;
        inOrder(root1,v);
        inOrder(root2,v);
        sort(v.begin(),v.end());
        return v;
    }
};
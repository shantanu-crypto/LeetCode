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
    int lvl=0;
    int sum=0;
    int cnt=0;
    void postOrder(TreeNode* root){
        if(!root) return;
        postOrder(root->left);
        postOrder(root->right);
        sum+=root->val;
        lvl++;
        return;
    }
    
    int averageOfSubtree(TreeNode* root) {
        if(!root) return 0;
        postOrder(root);
        if((sum/lvl)==root->val) cnt++;
        lvl=0;
        sum=0;
        averageOfSubtree(root->left);
        averageOfSubtree(root->right);
        return cnt;
    }
};
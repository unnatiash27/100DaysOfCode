/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };  
 */

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root==NULL) return nullptr;

            if(p->val < root->val && q->val < root->val)
            return lowestCommonAncestor(root->left,p,q);

            if(p->val > root->val && q->val > root->val)
            return lowestCommonAncestor(root->right,p,q);

        return root;
    }
};//Given a binary search tree (BST), find the lowest common ancestor (LCA) node of two given nodes in the BST.

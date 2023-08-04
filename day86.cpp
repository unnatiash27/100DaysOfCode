//Given the root of a Binary Search Tree (BST), return the minimum difference between the values of any two different nodes in the tree.


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
    int minDiffInBST(TreeNode* root) {
        int diff=INT_MAX;  
        int p=-1;
        inorder(root,diff,p);  
        return diff;
    }
    void inorder(TreeNode* root, int& diff,int& p)
    {
        if(root==NULL)return;
        inorder(root->left,diff,p);
        if(p!=-1)
        {
            diff=min(diff,root->val-p);
        }
        p=root->val;
        inorder(root->right,diff,p);
    }
};

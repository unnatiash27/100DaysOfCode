//Given the root node of a binary search tree and two integers low and high, return the sum of values of all nodes with a value in the inclusive range [low, high].
                   
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
int inorder(TreeNode* root, int l, int h)
{    
    if(root)
        {
            inorder(root->left,l,h);
            if(root->val>=l && root->val<=h)
            sum+=root->val;
            inorder(root->right,l,h);
        }
        return sum;
}
    int rangeSumBST(TreeNode* root, int l, int h) {
        if(!root)return 0;
        
        return inorder( root,  l,  h);
    }
};

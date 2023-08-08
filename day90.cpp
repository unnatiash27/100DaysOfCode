//Given the root of a binary search tree, return a balanced binary search tree with the same node values. If there is more than one answer, return any of them.
  
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
  
    TreeNode* balanceBST(TreeNode* root) {
        inorder(root);
        return solve(0,ans.size()-1);
    }
private:
vector<TreeNode*>ans;
    void inorder(TreeNode* root)
    {
        if(root==NULL)return;
        inorder(root->left);
        ans.push_back(root);
        inorder(root->right);
    }
    TreeNode* solve(int l,int h)
    {
        if(l>h)return NULL;
        int mid=(l+h)/2;
        TreeNode* root=ans[mid];
        root->left=solve(l,mid-1);
        root->right=solve(mid+1,h);
        return root;
    }
};

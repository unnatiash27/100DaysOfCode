//Given the root of a binary search tree (BST) with duplicates, return all the mode(s) (i.e., the most frequently occurred element) in it.

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
    int max = 0, c = 0, p = INT_MIN;
    vector<int> v;  
public:
    vector<int> findMode(TreeNode* root) {      
        traverse(root);
        return v;  
    }  
    void traverse(TreeNode* root)
    {
        if(root== NULL)return;
        traverse(root->left);
        
            if(p==root->val)
            c++;
            else
            c=1;
        
        if(c>max)
        {
            max=c;
            v.clear();
            v.push_back(root->val);
        }
        else if(c==max)
        {
            v.push_back(root->val);
        }
        p=root->val;
        traverse(root->right);
    }
};

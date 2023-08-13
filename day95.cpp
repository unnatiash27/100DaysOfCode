//Given the root of an n-ary tree, return the postorder traversal of its nodes' values.

/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}
     
    Node(int _val) {
        val = _val;  
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }   
};
*/

class Solution {
public:
        vector<int>v;
    vector<int> postorder(Node* root) {

        if(root == NULL)
        {vector<int>vi;
            return vi;}
        for(auto n:root->children)
        {postorder(n);}
        v.push_back(root->val);

        return v;
    }
};

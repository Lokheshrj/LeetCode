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
    void traverse(Node* r,vector<int>&n)
    {
        if(!r)
            return;
        for(auto x:r->children)
            traverse(x,n);
        n.push_back(r->val);
    }
    vector<int> postorder(Node* root) 
    {
        vector<int>n;
        traverse(root,n);
        return n;
    }
};
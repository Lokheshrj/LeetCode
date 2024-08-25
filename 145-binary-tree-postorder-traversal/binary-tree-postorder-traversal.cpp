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
    void Traversal(TreeNode *r,vector<int>&res)
    {
        if(!r)
            return;
        Traversal(r->left,res);
        Traversal(r->right,res);
        res.push_back(r->val);
    }
    vector<int> postorderTraversal(TreeNode* root) 
    {
        if(!root)
            return {};
        vector<int>res;
        Traversal(root,res);
        return res;
    }
};
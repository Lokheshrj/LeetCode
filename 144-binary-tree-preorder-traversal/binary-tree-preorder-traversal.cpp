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
    void traverse(vector<int>&res,TreeNode *r)
    {
        if(!r)return;
        res.push_back(r->val);
        traverse(res,r->left);
        traverse(res,r->right);
    }
    vector<int> preorderTraversal(TreeNode* root) 
    {
        vector<int>res;
        traverse(res,root);
        return res;
    }
};
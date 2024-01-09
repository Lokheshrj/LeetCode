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
    int count=0;
    void countnode(TreeNode*root,int max)
    {
        if(!root)
        return ;
        if(root->val>=max)
        {
            ++count;
            max=root->val;
        }
        countnode(root->left,max);
        countnode(root->right,max);
    }
    int goodNodes(TreeNode* root)
    {
        countnode(root,root->val);
        return count;
    }
};
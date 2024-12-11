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
    bool tree_traverse(TreeNode* root, int target,int prev)
    {
        if(!root)
        return false;
        int curr=prev+root->val;
        bool l,r;
        if(root->left)
            l=tree_traverse(root->left,target,curr);
        if(root->right)
            r=tree_traverse(root->right,target,curr);
        if(!root->left && !root->right && curr==target)
            return true;
        else 
            return r|l;
    }
    bool hasPathSum(TreeNode* root, int targetSum) 
    {
        bool l,r;
        // if(!root)
        //     return false;    
        return tree_traverse(root,targetSum,0);   
        return l|r;
    }
};
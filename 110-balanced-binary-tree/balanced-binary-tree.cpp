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
    int check(TreeNode *r)
    { 
        if(!r)
        return 0;
        int lh=check(r->left);
        int rh=check(r->right);
        return max(lh,rh)+1 ;
    }
    bool isBalanced(TreeNode* root) 
    {
        if(!root)
        return true;
        bool l=isBalanced(root->left);
        bool r=isBalanced(root->right);
        bool d=abs(check(root->left)-check(root->right))<2;
        if(l&&r&&d)
        return true;
        return false;
    }
};
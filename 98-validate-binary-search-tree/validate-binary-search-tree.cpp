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
    bool check(TreeNode *root,long long min,long long max)
    {
        if(!root)
        return true;
        if(!((min<root->val)&&(root->val<max)))
        return false;
        return check(root->left,min,root->val)&&check(root->right,root->val,max);
    }
    bool isValidBST(TreeNode* root) {
      if(root)
      return check(root,LLONG_MIN,LLONG_MAX);
      return true;
    }
};
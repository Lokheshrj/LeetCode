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
    int ans=0;
    void dfs(TreeNode*r,long long s)
    {
        if(!r)
        return;
        if(r->val==s)
        ++ans;
        dfs(r->left,s-r->val);
        dfs(r->right,s-r->val);
    }
    int pathSum(TreeNode* r, int target) {
        if(r)
        {
            dfs(r,target);
            pathSum(r->left,target);
            pathSum(r->right,target);
        }
        return ans;
    }
};
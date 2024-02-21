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
    void dfs (TreeNode*r,vector<int>&ans,int l)
    {
        if(!r)
        return;
        if(ans.size()==l) ans.push_back(r->val);
        dfs(r->right,ans,l+1);
        dfs(r->left,ans,l+1);
    }
    vector<int> rightSideView(TreeNode* root) 
    {
        vector<int>ans;
        int l=0;
        dfs(root,ans,l);
        return ans;
    }
};
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
    void order(TreeNode* root,vector<short int>& list)
    {
        if(!root)
        return;
        order(root->left,list);
        order(root->right,list);
        if(!(root->left||root->right))
        list.push_back(root->val);
    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
       vector<short int>l1,l2;
       order(root1,l1);
       order(root2,l2);
       return l1==l2?true:false;
    }
};
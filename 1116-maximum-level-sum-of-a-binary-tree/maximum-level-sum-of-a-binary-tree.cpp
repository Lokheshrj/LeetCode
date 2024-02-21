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
    void bfs(TreeNode*r,vector<int>&ans)
    {
        if(!r)
        return;
        queue<TreeNode*>q;
        q.push(r);
        while(!q.empty())
        {
            int sum=0;
            
            int n=q.size();
            for(int i=0;i<n;i++)
            {
                TreeNode*s=q.front();
                sum+=s->val;
                if(s->left)
                q.push(s->left);
                if(s->right)
                q.push(s->right);
                q.pop();
            }
            ans.push_back(sum);
        }
    }
    int maxLevelSum(TreeNode* root) {
        vector<int>ans;
        bfs(root,ans);
        int max=0;
        for(int i=1;i<ans.size();i++)
        {
            if(ans[max]<ans[i])
            max=i;
        }
        return max+1;
    }
};
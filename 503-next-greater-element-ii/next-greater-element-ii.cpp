class Solution {
public:
    void traversal(stack<int>&s,vector<int>&nums ,int i,vector<int>&ans)
    {
        while(!s.empty() && nums[i] >= nums[s.top()])
            {
                s.pop();
            }
            if(!s.empty()&&nums[s.top()]>nums[i])
               ans[i]=nums[s.top()]; 
            else
                ans[i]=-1;
            s.push(i);
        return;
    }
    vector<int> nextGreaterElements(vector<int>& nums) 
    {
        stack<int>s;
        int n=nums.size();
        vector<int>ans(n);
        int i=n-1;
        while(i>=0)
        {
            traversal(s,nums,i,ans);
            i--;
        }
        i=n-1;
        while(i>=0)
        {
            traversal(s,nums,i,ans);
            i--;
        }
        return ans;
    }
};
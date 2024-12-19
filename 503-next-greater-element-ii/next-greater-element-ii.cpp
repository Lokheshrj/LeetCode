class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) 
    {
        stack<int>s;
        int n=nums.size();
        vector<int>ans(n);
        for(int i=2*n-1;i>=0;i--)
        {
            while(!s.empty() && nums[i%n] >= nums[s.top()])
                s.pop();
                
            !s.empty()&&nums[s.top()]>nums[i%n]?ans[i%n]=nums[s.top()]:ans[i%n]=-1;
            s.push(i%n);
        }
        return ans;
    }
};
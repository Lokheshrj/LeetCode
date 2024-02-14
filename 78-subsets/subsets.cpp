class Solution {
public:
    void find(vector<int>&curr,int index,vector<vector<int>>&ans,vector<int>& nums)
    {
        if(index==nums.size())
        {
            ans.push_back(curr);
            return;
        }
        curr.push_back(nums[index]);
        find(curr,index+1,ans,nums);

        curr.pop_back();
        find(curr,index+1,ans,nums);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
      vector<int>curr;
      vector<vector<int>>ans;
      find(curr,0,ans,nums);
      return ans;  
    }
};
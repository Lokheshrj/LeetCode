class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) 
    {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        vector<int>ans(n,0);
        vector<int>res;
        for(int i=0;i<n;i++)
            ans[nums[i]-1]=1;

        for(int i=0;i<n;i++)
            if(ans[i]==0)
                res.push_back(i+1);
        return res;
    }
};
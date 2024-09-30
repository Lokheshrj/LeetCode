class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) 
    {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int max=nums[n-1]<n?n:nums[n-1];
        map<int,int>mp;
        int temp=0;
        vector<int>ans(max,0);
        vector<int>nu;
        for(int i=0;i<n;i++)
        {
            ans[nums[i]-1]=1;
        }
        for(int i=0;i<n;i++)
        {
            if(ans[i]==0)
                nu.push_back(i+1);
        }
        return nu;
    }
};
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) 
    {
        int n=nums.size();
        if(n<3)
        return {};
        sort(nums.begin(),nums.end());
        if(nums[0]>0)
        return {};
        map<int,int>m;
        vector<vector<int>>ans;
        for(int i=0;i<n;i++)
        m[nums[i]]=i;
        for(int i=0;i<n-2;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                int req=(nums[i]+nums[j])*-1;
                if(m.count(req)&&m.find(req)->second>j)
                {
                    ans.push_back({
                        nums[i],
                        nums[j],
                        req
                    });
                }
                j=m.find(nums[j])->second;
                i=m.find(nums[i])->second;
            }
        }
        return ans;
    }
};
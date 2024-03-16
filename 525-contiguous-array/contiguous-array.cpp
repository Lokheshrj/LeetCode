class Solution {
public:
    int findMaxLength(vector<int>& nums) 
    {
        
        map<int,int>mp;
        mp[0]=-1;
        int s=0;
        int l=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==1)
            ++s;
            else
            --s;
            if(mp.find(s)!=mp.end())
            l=max(l,i-mp[s]);
            else
            mp[s]=i;
        }
        return l;
    }
};
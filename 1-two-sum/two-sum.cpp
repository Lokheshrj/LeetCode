class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        map<int,int>mp;
        int req;
        for(int i=0;i<nums.size();i++)
        {
            req=target-nums[i];
            if(mp.count(req))
            return {mp[req],i};
            mp[nums[i]]=i;
        }
    return {-1,-1};
    }
};
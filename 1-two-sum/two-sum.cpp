class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        map<int,int>m;
        for(int i=0;i<nums.size();i++)
        {
            int req=target-nums[i];
            if(m.count(req))
            {
                return {i,m[req]};
            }
            m[nums[i]]=i;
        }
        return {-1,-1};
    }
};
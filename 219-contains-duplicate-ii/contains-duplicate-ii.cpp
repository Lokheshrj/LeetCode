class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) 
    {
        unordered_map<int,int>m;
        for(int i=0;i<nums.size();i++)
        {
            int current=nums[i];
            if(m.find(current)!=m.end())
            {
                if(abs(i-m[current]<=k)) return true;
            }
            m[current]=i;
        } 
        return false;  
    }
};
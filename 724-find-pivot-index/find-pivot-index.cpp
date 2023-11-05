class Solution {
public:
    int pivotIndex(vector<int>& nums) 
    {
        int f=0,b=0;
        for(auto x:nums)
            f+=x;
        for(int i=0;i<nums.size();i++)
        {
            f-=nums[i];
            if(f==b)
            return i;
            b+=nums[i];
        }
        return -1;
    }
};
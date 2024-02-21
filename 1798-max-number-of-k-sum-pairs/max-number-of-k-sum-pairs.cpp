class Solution {
public:
    int maxOperations(vector<int>& nums, int k) 
    {
        sort(nums.begin(),nums.end());
        int c=0;
        int l=0,r=nums.size()-1;
        while(l<r)
        {
            if(nums[l]+nums[r]==k)
            {
                ++c;
                ++l;
                --r;
            }
            else if(nums[l]+nums[r]<k)
                ++l;
            else
                --r;
        }
        return c;
    }
};
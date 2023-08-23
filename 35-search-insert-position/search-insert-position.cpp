class Solution {
public:
    int searchInsert(vector<int>& nums, int target) 
    {
        int i=0,n=nums.size();
        for(;i<n;i++)
        {
            if(nums[i]>=target)
            break;
        }
        return i;
    }
};
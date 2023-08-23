class Solution {
public:
    int searchInsert(vector<int>& nums, int target) 
    {
        int i,n=nums.size();
        for(i=0;i<n;i++)
        {
            if(nums[i]>=target)
            break;
        }
        return i;
    }
};
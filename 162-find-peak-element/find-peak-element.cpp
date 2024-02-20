class Solution {
public:
    int findPeakElement(vector<int>& nums) 
    {
        if(nums.size()==2)
            return nums[0]>nums[1]?0:1;
        else if(nums.size()==1)
            return 0;
        int n=nums.size()-1;
        if(nums[n]>nums[n-1])
            return n;
        int l=0;
        int h=2;
        for(int i=1;i<n;i++)
        {
            if(nums[l]<nums[i]&&nums[h]<nums[i])
            return i;
            ++l;
            ++h;
        }

        return 0;
    }
};
class Solution {
public:
    int first(vector<int>&nums,int target)
    {
        int l=0,h=nums.size()-1;
        int ans=-1;
        int mid;
        while(l<=h)
        {
            mid=(l+h)/2;
            if(nums[mid]==target)
            {
                ans=mid;
                h=mid-1;
            }
            else if(nums[mid]<target)
            {
                l=mid+1;
            }
            else
            {
                h=mid-1;   
            }
        }
        return ans;
    }
    int second(vector<int>&nums,int target)
    {
        int l=0,h=nums.size()-1;
        int ans=-1;
        int mid;
        while(l<=h)
        {
            mid=(l+h)/2;
            if(nums[mid]==target)
            {
                ans=mid;
                l=mid+1;
            }
            else if(nums[mid]<target)
            {
                l=mid+1;
            }
            else
            {
                h=mid-1;   
            }
        }
        return ans;
    }
    vector<int> searchRange(vector<int>& nums, int target) 
    {
        vector<int>ans;
        ans.push_back(first(nums,target));
        ans.push_back(second(nums,target));
        return ans;
    }
};
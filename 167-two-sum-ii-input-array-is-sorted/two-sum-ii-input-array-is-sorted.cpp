class Solution {
public:
    int search(vector<int>&arr,int low,int target)
    {
        int high=arr.size()-1;
        int mid;
        while(low<=high)
        {
            mid=(low+high)/2;
            if(arr[mid]==target)
                return mid;
            else if(arr[mid]>target)
            high=mid-1;
            else
            low=mid+1;
                
        }
        return -1;
    }
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        int n=nums.size()-1;
        int val,i=0;
        for(i;i<=n;i++)
        {
            val=search(nums,i+1,target-nums[i]);
            if(val!=-1)
                break;
        }
        return{i+1,val+1};
    }
};
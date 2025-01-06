class Solution {
public:
    int search(vector<int>&arr,int low,int high,int target)
    {
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
        int val;
        for(int i=0;i<=n;i++)
        {

            val=search(nums,i+1,n,target-nums[i]);
            if(val!=-1)
                return {i+1,val+1};
            
        }
        return{-1,-1};
    }
};
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        int low=0,high=nums.size()-1;
        short int value;
        while(low<high)
        {
            value=nums[low]+nums[high];
            if(value==target)
                return {low+1,high+1};
            else if(value>target)
                --high;
            else
                ++low;      
        }
        return{-1,-1};
    }
};
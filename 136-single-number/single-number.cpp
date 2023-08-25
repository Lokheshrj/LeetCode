class Solution {
public:
    int singleNumber(vector<int>& nums) {
    sort(nums.begin(),nums.end());
    int i;
    int s=nums.size()-1;
    for(i=0;i<s;i++)
    {
       if(i>0&&i<s-1)
       {
            if(nums[i-1]!=nums[i]&&nums[i]!=nums[i+1])
                break;
       }
       else if(i==0)
       {
            if (nums[i+1]!=nums[i])
                break;
       }
       else
       {
            if(nums[i+1]!=nums[i])
                return nums[i+1]; 
       }      
    }
    return nums[i];
    }
};
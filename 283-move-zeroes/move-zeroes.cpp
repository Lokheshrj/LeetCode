class Solution {
public:
    void moveZeroes(vector<int>& nums) 
    {
        int i=0,j=i+1;
        int n=nums.size();
        while(j<n)
        {
            if(nums[i]==0&&nums[j]!=0)
            {
                nums[i]=nums[j];
                nums[j]=0;
                ++j;
                ++i;
            }
            else if(nums[i]==0&&nums[j]==0)
            ++j;
            else
            {
                ++i;
                ++j;
            }
        }
    }
};
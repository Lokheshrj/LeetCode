class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int zc=0,p=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0)
                ++zc;
            else
            {
                nums[p]=nums[i];
                ++p;
            }
        }
        while(zc--)
        {
            nums[p]=0;
            ++p; 
        }
    }
};
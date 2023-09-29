class Solution {
public:
    void moveZeroes(vector<int>& nums) {
     short int zc=0,p=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]!=0)
            {
                nums[p]=nums[i];
                ++p;
            }
            else
                 ++zc;
        }
        for(;zc>0;--zc)
        {
            nums[p]=0;
            ++p; 
        }
    }
};
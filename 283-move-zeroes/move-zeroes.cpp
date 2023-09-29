class Solution {
public:
    void moveZeroes(vector<int>& nums) {
     short int zc=0,p=0,s=nums.size();
        for(int i=0;i<s;i++)
        {
            if(nums[i]==0)
                ++zc;
            else
            {
                nums[p]=nums[i];
                ++p;
            }
        }
        for(int i=zc;i>0;--i)
        {
            nums[p]=0;
            ++p; 
        }
    }
};
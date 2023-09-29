class Solution {
public:
    void moveZeroes(vector<int>& nums) {
     short int zc=0,p=0,s=nums.size();
        for(short int i=0;i<s;i++)
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
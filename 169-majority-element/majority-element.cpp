class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int c=0,m=0,n=0;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-1;i++)
        {
            if(nums[i]==nums[i+1])
            c++;
            else
            c=0;
                if(c>m)
                {
                m=c;
                n=i;
                }
        }
        return nums[n];
    }
};
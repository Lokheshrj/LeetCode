class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int c=0,m=0,n=0,s=nums.size()-1;
        sort(nums.begin(),nums.end());
        for(int i=0;i<s;i++)
        {
            if(nums[i]==nums[i+1])
            c++;
            else
            c=0;
            if(c>m&&c>0)
            {
            m=c;
            n=i;
            }
        }
        return nums[n];
    }
};
class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) 
    {
        sort(nums.begin(),nums.end());
        short int n=nums.size()-1;
        short int c=1,max=1,t=1;
        for(int i=0;i<n;i++)
        {
            if(nums[i]==nums[i+1])
            ++c;
            if(i==n-1||nums[i]!=nums[i+1])
            {
                if(max<c)
                {
                    max=c;
                    t=1;
                }
                else if(max==c)
                ++t;
                
                c=1;
            }
        }
        cout<<"t :"<<t<<"max :"<<max;
        return t*max;
    }
};
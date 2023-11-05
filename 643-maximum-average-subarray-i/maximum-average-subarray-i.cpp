class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) 
    {
        int sum=0;
        double m;
        int i;
        for(i=0;i<k;i++)
            sum+=nums[i];
        int j=0;
        m=sum;
        while(i<nums.size())
        {
            sum+=nums[i]-nums[j];
            if(m<sum)
            m=sum;
            ++j;
            ++i;
        }
        return m/k;
    }
};
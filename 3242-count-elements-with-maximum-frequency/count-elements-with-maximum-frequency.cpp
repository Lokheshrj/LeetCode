class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) 
    {
        int c=1,max=0;
        sort(nums.begin(),nums.end());
        int n=nums.size()-1;
        map<int,int>m;
        for(int i=0;i<=n;i++)
        {
            ++m[nums[i]];
            if(i<n&&nums[i]==nums[i+1])
            ++c;
            else
            {
                if(c>max)
                max=c;
                c=1; 
            }
        }
        c=0;
        for(auto x:m)
        {
            //cout<<x.first<<x.second<<"\n";
            if(x.second==max)
            c+=x.second;
        }
        cout<<c;
        return c;
    }
};
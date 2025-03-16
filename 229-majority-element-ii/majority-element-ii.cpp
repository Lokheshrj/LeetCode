class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) 
    {
        int n=nums.size();
        int c1=0,c2=0,e1=INT_MIN,e2=INT_MIN;
        for(int i=0;i<n;i++)
        {
            if(e2!=nums[i]&&c1==0)
            {
                e1=nums[i];
                c1=1;
            }
            else if(e1!=nums[i]&&c2==0)
            {
                e2=nums[i];
                c2=1;
            }
            else if(e1==nums[i])
                c1++;
            else if(e2==nums[i])
                c2++;
            else
                {
                    c1--;
                    c2--;
                }
        }
        c1=0,c2=0;
        for(int i=0;i<n;i++)
        {
            if(e1==nums[i])
                c1++;
            else if(e2==nums[i])
                c2++;
        }
        vector<int>ans;
        cout<<c1<<c2<<e1<<e2;
        if(c1>n/3)
            ans.push_back(e1);
        if(c2>n/3)
            ans.push_back(e2);
        return ans;    
    }
};
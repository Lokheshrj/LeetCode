class Solution {
public:
    int counter(vector<int>&nums,int l,int m,int r)
    {
        int c=0;
        int j=m+1;
        for(int i=l;i<=m;i++)
        {
            while(j<=r&&nums[i]>(long long)2*nums[j])
            {
                j++;
            }
            c+=(j-(m+1));
        }
        vector<int>temp;
        int i=l;
        j=m+1;

        while(i<=m&&j<=r)
        {
            if(nums[i]<=nums[j])
            {
                temp.push_back(nums[i]);
                i++;
            }
            else
            {
                temp.push_back(nums[j]);
                j++;
            }
        }
        while(i<=m)
        {
            temp.push_back(nums[i]);
            i++;
        }
        while(j<=r)
        {
            temp.push_back(nums[j]);
                j++;
        }
        for(int i=l;i<=r;i++)
        {
            nums[i]=temp[i-l];
        }
        return c;
    }
    int merge(vector<int>&nums,int l,int r)
    {
        int c=0;
        if(l>=r)    
            return c;
        int mid=(l+r)/2;
        c+=merge(nums,l,mid);
        c+=merge(nums,mid+1,r);
        return c+=counter(nums,l,mid,r);
    }
    int reversePairs(vector<int>& nums) 
    {
        return merge(nums,0,nums.size()-1);
    }
};
class Solution {
public:
    int maxArea(vector<int>& height) 
    {
        int l=0;
        int r=height.size()-1;
        int ans=0;int t=0;
        while(l<r)
        {
            t=min(height[r],height[l])*(r-l);
            ans=max(ans,t);
            if(height[l]<height[r])
            ++l;
            else
            --r;
        }
        return ans;
    }
};
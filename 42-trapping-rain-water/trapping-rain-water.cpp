class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        vector<int>pm(n),sm(n);
        
        pm[0]=height[0];
        for(int i=1;i<n;i++)
        pm[i]=max(pm[i-1],height[i]);

        sm[ n-1]=height[n-1];
        for(int i=n-2;i>=0;--i)
        sm[i]=max(sm[i+1],height[i]);
        int ans=0;
        for(int i=0;i<n;i++)
        {
            int lm=0;
            if(i-1>=0)
            lm=pm[i];
            int rm=0;
            if(i+1<n)
            rm=sm[i];
            int water=min(lm,rm)-height[i];
            if(water>0)
            ans+=water;
        }
        return ans;

    }
};
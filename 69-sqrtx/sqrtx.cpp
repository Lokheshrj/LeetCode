class Solution {
public:
    int mySqrt(int x) {
    int l=0,h=x;
    int ans;
    long long int mid;
    while(l<=h)
    {
        mid=(l+h)/2;
        if(mid*mid<=x)
        {
            ans=mid;
            l=mid+1;
        }
        else
        {
            h=mid-1;
        }
    }
    return ans;
    }
};
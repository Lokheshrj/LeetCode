class Solution {
public:
    double myPow(double x, int n) {
        if(x==0||x==1)
            return x;
        double ans=1;
        if(n<0)
        {
            x=1/x;
            n=-(n+1);//to avoid overflow
            ans*=x;
        }
        while(n>0)
        {
            if(n%2)
            {
                ans*=x;
                n--;
            }
            else
            {
                x*=x;
                n/=2;
            }
        }
        return ans;
    }
};
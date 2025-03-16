class Solution {
public:
    double myPow(double x, int n) {
        double ans=1;
        if(x==0||x==1)
            return x;
        if(n<0)
        {
            x=1/x;
            n=-(n+1);
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
class Solution {
public:
    int pivotInteger(int n) 
    {
        int f;
        int b;
        for(int i=1;i<=n;i++)
        {
            f=(i*(i+1))/2;
            b=(n*(n+1)/2)-(((i-1)*i)/2);
            if(f==b)
            {
                return i;
            }
        }
        return -1;
    }
};
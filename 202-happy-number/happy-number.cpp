class Solution {
public:
    int split_square(int n)
    {
        int res=0;
        while(n>0)
        {
            res+=(n%10)*(n%10);
            n/=10;
        }
        return res;
    }
    bool isHappy(int n) 
    {
        int s=n;
        int f=n;
        do
        {
            s=split_square(s);
            f=split_square(split_square(f));
        }while(s!=f);
        return s==1;
    }
};
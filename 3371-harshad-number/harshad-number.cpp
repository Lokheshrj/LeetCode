class Solution {
public:
    int SOD(int x)
    {
        int res=0;
        while(x)
        {
            res+=x%10;
            x/=10;
        }
        return res;
    }
    int sumOfTheDigitsOfHarshadNumber(int x) 
    {
        int res=SOD(x);
        return x%res==0?res:-1;
    }
};
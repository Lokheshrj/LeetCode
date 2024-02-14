class Solution {
public:
    int reverse(int x) {
        int t=abs(x);
        long temp=0;
        while(t>0)
        {
            if((temp*10)+(t%10)>pow(-2,31)&&(temp*10)+(t%10)<pow(2,31)-1)
            {
                temp=(temp*10)+(t%10);
                t/=10;
            }
            else return 0;
        }
        if(x>pow(-2,31)&&x<pow(2,31)-1)
        {
            if(x<0)
            return temp*-1;
            return temp;
        }
    return 0;
    }
};
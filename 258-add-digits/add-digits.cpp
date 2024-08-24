class Solution {
public:
    int split_digits(int n)
    {
        int res=0;
        while(n)
        {
            res+=n%10;
            n/=10;
        }
        return res;
        cout<<res;
    }
    int addDigits(int num) {
        while(num>9)
            num=split_digits(num);  
        return num;
    }
};
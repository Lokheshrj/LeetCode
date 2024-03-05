class Solution {
public:
    string maximumOddBinaryNumber(string s) 
    {
        short int c=0;
        int n=s.length()-1;
        for(int i=0;i<=n;i++)
        {
            if(s[i]=='1')
            {
                ++c;
                s[i]='0';
            }
        }
        if (c==2)
            s[0]='1';
        else if(c>2)
        {
            for(int i=0;i<c-1;i++)
            s[i]='1';
        }
        s[n]='1';
        return s;
    }
};
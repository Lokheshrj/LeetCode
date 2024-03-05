class Solution {
public:
    string maximumOddBinaryNumber(string s) 
    {
        map<char,int>m;
        for(char x:s)
        m[x]++;
        int n=s.length()-1;
        for(int i=0;i<=n;i++)
        s[i]='0';
        if(m['1']==1)
        {
            s[n]='1';
            return s;
        }
        else if (m['1']==2)
        {
            s[0]='1';
            s[n]='1';
            return s;
        }
        else
        {
            for(int i=0;i<m['1']-1;i++)
            s[i]='1';
            s[n]='1';
            return s;
        }
        return "";
    }
};
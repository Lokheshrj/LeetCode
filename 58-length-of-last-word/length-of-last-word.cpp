class Solution {
public:
    int lengthOfLastWord(string s) {
        int len=s.length();
        int i;
        int f=0;
    for( i=len-1;i>=0;--i)
    {
        if(s[i]==' '&&f==1)
        break;
        if(s[i]!=' '&&f==0)
        f=1;
    }
    f=0;
    ++i;
    for(;s[i]!=NULL;++i)
    {
        if(s[i]==' ')
        break;
        else
        ++f;
    }
    return f;
    }
};
class Solution {
public:
    int lengthOfLastWord(string s) {
    int len=s.length(),i,f=0,c=0;
    for(i=len-1;i>=0;--i)
    {
        if(s[i]==' '&&f==1)
        break;
        else if(s[i]!=' '&&f==0)
        f=1;
        else if(s[i]==' '&&f==0)
        ++c;
    }
    return len-(i+1)-c;
    }
};
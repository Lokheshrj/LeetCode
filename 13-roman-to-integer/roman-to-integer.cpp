class Solution {
public:
    int romanToInt(string s) 
    {
        int tot=0;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='I')
            {
            if(s[i+1]!='V'&&s[i+1]!='X')
            tot+=1;
            else
            tot-=1;
            }
            else if(s[i]=='V')
            tot+=5;
            else if(s[i]=='X')
            {
                if(s[i+1]!='L'&&s[i+1]!='C')
                tot+=10;
                else
                tot-=10;
            }
            else if(s[i]=='L')
            tot+=50;
            else if(s[i]=='C')
            {
                if(s[i+1]!='D'&&s[i+1]!='M')
                tot+=100;
                else
                tot-=100;
            }
            else if(s[i]=='D')
            tot+=500;
            else if(s[i]=='M')
            tot+=1000;
        }  
        return tot; 
    }
};
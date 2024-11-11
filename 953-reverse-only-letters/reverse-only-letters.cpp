class Solution {
public:
    string reverseOnlyLetters(string s) 
    {
        int i=0;
        int j=s.length()-1;
        char ch;
        while(i<=j)
        {
            if(((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z')))
            {
                if((s[j]>='a'&&s[j]<='z')||(s[j]>='A'&&s[j]<='Z'))
                {
                
                    ch=s[i];
                    s[i]=s[j];
                    s[j]=ch;
                    --j;
                }
                else
                {
                    --j;
                    continue;
                }
            }
            ++i;
        }
        return s;
    }
};
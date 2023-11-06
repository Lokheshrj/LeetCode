class Solution {
public:
    int maxVowels(string s, int k) 
    {
        int i;
        int m,c=0;
        for(i=0;i<k;i++)
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
                ++c;
        m=c;
        while(i<s.length())
        {
            if(s[i-k]=='a'||s[i-k]=='e'||s[i-k]=='i'||s[i-k]=='o'||s[i-k]=='u')
            --c;
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u') 
            ++c;
            if(c>m)
            m=c;
            ++i;
        }
        return m;
    }
};
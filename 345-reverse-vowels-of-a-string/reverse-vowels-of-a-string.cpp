class Solution {
public:
    string reverseVowels(string s) 
    {

        vector<char>list;
        int len=s.length();
        int c=0,i;
        for(i=0;i<len;i++)
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
            list.push_back(s[i]);
        for(i=len-1;i>=0;--i)
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
            {
                s[i]=list[c];
                ++c;
            }
            return s;
    }
};
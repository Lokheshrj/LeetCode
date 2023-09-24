class Solution {
public:
    bool isvowel(char c)
    {
        return (c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U');
    }
    string reverseVowels(string s) 
    {

        vector<char>list;
        int len=s.length();
        int c=0;
        for(int i=0;i<len;i++)
            if(isvowel(s[i]))
            list.push_back(s[i]);
        for(int i=len-1;i>=0;--i)
            if(isvowel(s[i]))
            {
                s[i]=list[c];
                ++c;
            }
            return s;
    }
};
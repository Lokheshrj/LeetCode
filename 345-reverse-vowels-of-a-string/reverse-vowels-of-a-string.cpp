class Solution {
public:
    bool isvowel(char c)
    {
        return (c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U');
    }
    string reverseVowels(string s) 
    {

        vector<char>list;
        //int len=;
        int c=0,i;
        for(i=0;i<s.length();i++)
            if(isvowel(s[i]))
            list.push_back(s[i]);
        for(i=s.length()-1;i>=0;--i)
            if(isvowel(s[i]))
            {
                s[i]=list[c];
                ++c;
            }
            return s;
    }
};
class Solution {
public:
    string reverseWords(string s) 
    {
        vector<string>dum;
        string d="";
        for(int i=0;s[i]!='\0';i++)
        {
            if(s[i]==' '||s[i+1]=='\0')
            {
                if(s[i+1]=='\0'&&s[i]!=' ')
                d+=s[i];
                if(d!="")
                dum.push_back(d);
                d="";
            }
            else
            d+=s[i];
        }
        auto i=dum.rbegin();
        d=*i;
        ++i;
        for(;i!=dum.rend();i++)
            d+=" "+*i;
        return d;
    }
};
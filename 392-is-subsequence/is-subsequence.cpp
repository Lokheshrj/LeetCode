class Solution {
public:
    bool isSubsequence(string s, string t) 
    {
        short int c=0;
        for(int i=0;t[i]!='\0';i++)
        {
            if(t[i]==s[c])
            ++c;
        }
        if(s.length()==c)
        return true;
        return false;
    }
};
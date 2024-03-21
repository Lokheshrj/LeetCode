class Solution {
public:
    string licenseKeyFormatting(string s, int k) 
    {
        string ans="";
        int length=s.length()-1;
        int c=0;
        for(int i=length;i>=0;--i)
        {
            if(s[i]!='-')
            {
                if(c<k)
                {
                    ans+=toupper(s[i]);
                    ++c;
                }
                else
                {
                    ans+='-';
                    ans+=toupper(s[i]);
                    c=1;
                }
            }
        } 
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
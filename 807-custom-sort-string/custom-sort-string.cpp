class Solution {
public:
    string customSortString(string order, string s) 
    {
        vector<int>mp(26,0);
        for(char ch:s)
        ++mp[ch-'a'];
        s="";
        for(char ch:order)
        {
            if(mp[ch-'a'])
            {
                s+=string(mp[ch-'a'],ch);
                mp[ch-'a']=0;
            }
        }
        for(int i=0;i<26;i++)
        {
            if(mp[i])
            s+=string(mp[i],i+'a');
        }
        return s;
    }
};
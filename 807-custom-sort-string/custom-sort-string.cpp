class Solution {
public:
    string customSortString(string order, string s) 
    {
        map<char,int>mp;
        for(char ch:s)
        ++mp[ch];
        string samp="";
        for(char ch:order)
        {
            if(mp[ch])
            {
                samp+=string(mp[ch],ch);
                mp[ch]=0;
            }
        }
        for(auto x : mp)
        {
            if(x.second)
            samp+=string(x.second,x.first);
        }
        cout<<samp;
        return samp;
    }
};
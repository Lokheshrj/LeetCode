class Solution {
public:
    string customSortString(string order, string s) 
    {
        vector<int>mp(26,0);
        //map<char,int>mp;
        for(char ch:s)
        ++mp[ch-'a'];
        string samp="";
        for(char ch:order)
        {
            if(mp[ch-'a'])
            {
                samp+=string(mp[ch-'a'],ch);
                mp[ch-'a']=0;
            }
        }
        for(int i=0;i<26;i++)
        {
            if(mp[i])
            samp+=string(mp[i],i+'a');
        }
        cout<<samp;
        return samp;
    }
};
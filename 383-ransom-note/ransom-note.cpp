class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) 
    {
        
        map<char,int>mp;
        int c=0;
        for(char ch:ransomNote)
            ++mp[ch];
            
        for(char ch:magazine)
        {
            if(mp[ch]>0)
                --mp[ch];
        }
        for(auto a:mp)
        {
            if(a.second>0)
                return false;
        }
        return true;
    }
};
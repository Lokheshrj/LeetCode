class Solution {
public:
    bool isAnagram(string s, string t) 
    {
        map<char,int>m;
        for(int i=0;s[i]!='\0';i++)
            m[s[i]]++;
        for(int i=0;t[i]!='\0';i++)
            m[t[i]]--;
        for(auto x:m)
            if(x.second!=0)
                return false;
        return true;
    }
};
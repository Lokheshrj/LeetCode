class Solution {
public:
    int lengthOfLongestSubstring(string s) 
    {
        int l=s.length();
        if(l==1)
            return 1;
        int maxx=0;
        int temp=0;
        int start=0;
        unordered_map<char,int>mp;
        for(int i=0;i<l;i++)
        {
            if(mp.find(s[i])!=mp.end()&&mp[s[i]]>=start)
            {
                maxx=max(maxx,temp);
                start=mp[s[i]]+1;
                temp=i-start+1;
            }
            else
            {
                ++temp;
            }
            mp[s[i]]=i;
        }
        maxx=max(maxx,temp);
        return maxx;
    }
};
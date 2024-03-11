class Solution {
public:
    int lengthOfLongestSubstring(string s) 
    {
        int maxl=0;
        int n=s.length();
        unordered_set<char>ch;
        int l=0;
        for(int r=0;r<n;r++)
        {
            if(!ch.count(s[r]))
            {
                ch.insert(s[r]);
                maxl=max(maxl,r-l+1);
            }
            else
            {
                while(ch.count(s[r]))
                {
                    ch.erase(s[l]);
                    ++l;
                }
                ch.insert(s[r]);
            }
        }
        return maxl;
    }
};
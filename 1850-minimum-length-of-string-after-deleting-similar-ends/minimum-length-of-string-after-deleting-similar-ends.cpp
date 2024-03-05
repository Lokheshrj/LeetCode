class Solution {
public:
    int minimumLength(string s) 
    {
        int f=0;
        int l=s.length()-1;
        while(f<l)
        {
            while(s[f]==s[f+1]&&f+1!=l&&s[f]==s[l])
            ++f;
            while(s[l]==s[l-1]&&l-1!=f&&s[f]==s[l])
            --l;
            if(s[f]==s[l])
            {
                ++f;
                --l;
            }
            else
            break;
        }
        cout<<l-f;
        return l-f+1;
    }
};
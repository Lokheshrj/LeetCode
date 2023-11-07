class Solution {
public:
    string removeStars(string s) 
    {
        string t;
        for(int i=0;i<s.length();i++){
            if(s[i]=='*')
            t.pop_back();
            else t.push_back(s[i]);
        }
           // (s[i]=='*')?t.pop_back(): t.push_back(s[i]);
        return t;   
    }
};
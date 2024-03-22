class Solution {
public:
    bool isIsomorphic(string s, string t) 
    {
        map<char,int>m1,m2;
        bool ans=true;
        for(int i=0;i<s.length();i++)
        {
            if(m1[s[i]]&&m2[t[i]])
            {
                cout<<"1";
                if(m1[s[i]]!=m2[t[i]])
                {
                    ans=false;
                    break;
                }
            }
            else if(m1[s[i]]||m2[t[i]])
            {
                cout<<"2";
                ans=false;
                break;
            }
            m1[s[i]]=i+1;
            m2[t[i]]=i+1;
        }
        return ans;
    }
};
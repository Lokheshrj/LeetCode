class Solution {
public:
    string decodeString(string s) {
    string st;
    string temp;
    string r;
    int si;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]!=']')
        st.push_back(s[i]);
        else
        {
            si=st.length()-1;
            while(st[si]!='[')
            {
                temp.push_back(st[si]);
                st.pop_back();
                --si;
            }
            --si;
            st.pop_back();
            while(si>=0 && st[si]>='0'&& st[si]<='9')
            {
                r.push_back(st[si]);
                --si;
                st.pop_back();
            }
            reverse(r.begin(),r.end());
            si=0;
            for(int j=0;j<r.size();j++)
            {
                si*=10;
                si+=(r[j]-48);
            }
            r.clear();
            reverse(temp.begin(),temp.end());
            while(si--)
            {
                for(int k=0;k<temp.size();k++)
                    st.push_back(temp[k]);
            }
        temp.clear();
        }
    }
    return st;    
    }
};
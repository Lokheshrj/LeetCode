class Solution {
public:
    string licenseKeyFormatting(string s, int k) 
    {
        stack<char>st;
        for(char ch:s)
        {
            if(ch!='-')
            st.push(toupper(ch));
        }
        s="";
        int c=0;
        while(!st.empty())
        {
            if(c<k)
            {
                s+=st.top();
                st.pop();
                ++c;
            }
            else
            {
                s+='-';
                c=0;
            }
        }
        reverse(s.begin(),s.end());
        return s;
    }
};
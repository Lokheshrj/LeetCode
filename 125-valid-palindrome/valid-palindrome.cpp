class Solution {
public:
    bool isPalindrome(string s) {

        string t="";
        for(char ch:s)
        {
            if(isalpha(ch)||ch>='0'&&ch<='9')
            {
                t+=tolower(ch);
            }
        }
        cout<<t;
        int h=t.length()-1;
        if(h==-1)
        return true;
        for(int i=0;i<=h/2;i++)
        {
            if(t[i]!=t[h-i])
                return false;
        }
        return true;
    }
};
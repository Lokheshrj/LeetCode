class Solution {
public:
    int firstUniqChar(string s) 
    {
        vector<int>list(26,-1);
        for(int i=0;s[i]!='\0';i++)
        {
            if(list[s[i]-'a']==-1)
                list[s[i]-'a']=i;
            else
                list[s[i]-'a']=-2;
        }
        int min=s.length();
        for(int x:list)
            if(x>-1)
            {
                if(x<min)
                    min=x;
            }
        return min==s.length()?-1:min;
    }
};
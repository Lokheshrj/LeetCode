class Solution {
public:
    int firstUniqChar(string s) 
    {
        vector<int>list(26,0);
        for(int i=0;s[i]!='\0';i++)
        {
            ++list[s[i]-'a'];
        }
        for(int i=0;s[i]!='\0';i++)
        {
            if(list[s[i]-'a']==1)
                return i;
        }
        return -1;
    }
};
class Solution {
public:
    int maxScore(string s) {
    int z=0,o=0;
    for(char ch:s)
        {
            if(ch=='0')
                ++z;
            else
                ++o;
        }
    int temp=0;
    int max=-1;
    for(int i=0;i<s.length()-1;++i)
    {
        if(s[i]=='0')
            ++temp;
        else
            --o;
        if(max<temp+o)
            max=temp+o;
    }
    return max;
    }
};
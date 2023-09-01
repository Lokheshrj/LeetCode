class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) 
    {
        string comm;
        int i=0,c=0;
        if(strs.size()==1||strs[0].size()==0)
        return strs[0];
        while(strs[0][i]==strs[1][i]&&i<strs[0].size())
        ++i;
        if(strs.size()==2)
          goto COMM;
        for(int j=2;j<strs.size();j++)
        {
            while(strs[0][c]==strs[j][c]&&c<strs[0].size())
            ++c;
            if(c<i)
            i=c;
            c=0;
        }
        COMM:
        for(c=0;c<i;c++)
        comm.push_back(strs[0][c]);
        return comm;
    }
};
class Solution {
public:
    vector<string> commonChars(vector<string>& words) 
    {
        vector<int>cntg(26,INT_MAX);
        for(auto s:words)
        {
            vector<int>cntl(26,0);
            for(auto c:s)
            {
                ++cntl[c-'a'];
            }
            for(short int i=0;i<26;i++)
            {
                cntg[i]=cntg[i]<cntl[i]?cntg[i]:cntl[i];
            }
        }
        vector<string>ans;
        for(short int i=0;i<26;i++)
        for(short int j=0;j<cntg[i];j++)
        ans.push_back(string(1,i+'a'));
        return ans;
    }
};
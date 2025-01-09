class Solution {
public:
    int prefixCount(vector<string>& words, string pref) 
    {
        int total=0;
        for(int j=0;j<words.size();j++)
        {
            for(int i=0;i<pref.size();i++)
            {
                if(words[j][i]!=pref[i])
                {
                    ++total;
                    break;
                }
            }
        }
        return words.size()-total;
    }
};
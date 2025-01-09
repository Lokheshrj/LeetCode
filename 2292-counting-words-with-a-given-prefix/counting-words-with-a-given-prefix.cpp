class Solution {
public:
    int prefixCount(vector<string>& words, string pref) 
    {
        int size=words.size(),total=0;
        for(string word:words)
        {
            for(int i=0;i<pref.size();i++)
            {
                if(word[i]!=pref[i])
                {
                    ++total;
                    break;

                }
            }
        }
        return size-total;
    }
};
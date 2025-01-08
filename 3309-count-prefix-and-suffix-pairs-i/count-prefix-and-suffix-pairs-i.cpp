class Solution {
public:
    bool isPrefixAndSuffix(string s1,string s2)
    {
        int j=s2.length()-1;
        for(int i=s1.length()-1;i>=0;i--)
        {
            if(s1[i]!=s2[i]||s1[i]!=s2[j])
                return false;
            --j;
        }
        return true;
    }
    int countPrefixSuffixPairs(vector<string>& words) {
        int count=0;
        for(int i=0;i<words.size()-1;i++)
        {
            for(int j=i+1;j<words.size();j++)
            {
                if(words[i].length()<=words[j].length())
                    count+=isPrefixAndSuffix(words[i],words[j])?1:0;
            }
        }
        return count;
    }
};
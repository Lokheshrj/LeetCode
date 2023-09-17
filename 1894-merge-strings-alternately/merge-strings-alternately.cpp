class Solution {
public:
    string mergeAlternately(string word1, string word2) {
    int l=0,i=0;
    string res="";
    while((word1[l]!='\0') && (word2[l]!='\0'))
    {
        res+=word1[l];
        res+=word2[l];
        ++l;
    }
    if(l<word2.length())
    {
        for(;l<word2.length();l++)
        res+=word2[l];
        return res;
    }
    if(l<word1.length())
    {
        for(;l<word1.length();l++)
        res+=word1[l];
    }
    return res;
    }
};
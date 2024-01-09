class Solution {
public:
    bool closeStrings(string word1, string word2) {
    map<char,int>w1,w2;
    for(char x:word1)
    w1[x]++;
    for(char x:word2)
    w2[x]++;
    vector<int>w11,w22;
    set<char>c11,c22;
    for(auto x:w1)
    {
        c11.insert(x.first);
        w11.push_back(x.second);
    }
    for(auto x:w2)
    {
        c22.insert(x.first);
        w22.push_back(x.second);
    }
    sort(w11.begin(),w11.end());
    sort(w22.begin(),w22.end());
    for(auto x:w22)
    cout<<x<<"\n";
    return w11==w22 && c11==c22;
    }
};
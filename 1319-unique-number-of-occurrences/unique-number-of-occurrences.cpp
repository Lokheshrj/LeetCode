class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) 
    {
        map<int,int>occur;
        set<int>unique;
        for(auto x:arr)
        occur[x]++;
        for(auto it=occur.begin();it!=occur.end();++it)
            unique.insert(it->second);
        return occur.size()==unique.size();
    }
};
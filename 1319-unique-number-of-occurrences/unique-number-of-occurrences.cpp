class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) 
    {
        map<int,int>occur;
        set<int>unique;
        int n=arr.size();
        for(int i=0;i<n;i++)
            occur.insert({arr[i],count(arr.begin(),arr.end(),arr[i])});
        for(auto it=occur.begin();it!=occur.end();++it)
            unique.insert(it->second);
        return occur.size()==unique.size();
    }
};
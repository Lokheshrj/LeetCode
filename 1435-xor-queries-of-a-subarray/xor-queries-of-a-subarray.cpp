class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) 
    {
        vector<int> result;
        int t;
        for(auto a:queries)
        {
            t=0;
            for(int i=a[0];i<=a[1];i++)
                t=t^arr[i];
            result.push_back(t);
        }
        return result;
    }
};
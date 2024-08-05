class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        unordered_map <string,int> mp;
        for(string x:arr)
            ++mp[x];
        int c=0;
        for(string x:arr)
        {
            if(mp[x]==1)
            {
                if(c+1==k)
                    return x;
                else
                    ++c;
            }
        }
        return "";
    }
};
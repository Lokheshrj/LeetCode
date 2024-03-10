class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) 
    {
       map<int,int>m;
       for(auto x:nums1)
            m[x]++;
        set<int>s;
        for(auto x:nums2)
        {
            if(m[x])
                s.insert(x);
        }
        vector<int>ans(s.begin(),s.end());
        return ans;
    }
};
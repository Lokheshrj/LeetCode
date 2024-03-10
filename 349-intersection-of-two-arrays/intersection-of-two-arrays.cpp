class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) 
    {
       map<int,int>m;
       for(auto x:nums1)
            m[x]++;
        vector<int>ans;
        for(auto x:nums2)
        { 
            if(m[x])
            {
                ans.push_back(x);
                m[x]=0;
            }
        }
        return ans;
    }
};
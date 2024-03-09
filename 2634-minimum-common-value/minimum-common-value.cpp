class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2)
    {
        map<int,int>m;
        for(auto x:nums1)
        m[x]++;
        for(auto x:nums2)
        {
            if(m[x])
            return x;
        }
        return -1;
    }
};
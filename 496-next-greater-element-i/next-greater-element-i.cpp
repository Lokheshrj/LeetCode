class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack<int>s;
        map<int,int>mp;
        vector<int>res;
        for(int i=nums2.size()-1;i>=0;i--)
        {
            while(!s.empty() && s.top()<nums2[i])
            {
                s.pop();
            }
            if(!s.empty())
                mp[nums2[i]]=s.top();
            else
                mp[nums2[i]]=-1; 
            s.push(nums2[i]);
        }
        for(int x:nums1)
        {
            res.push_back(mp[x]);
        }
        return res;
    }
};
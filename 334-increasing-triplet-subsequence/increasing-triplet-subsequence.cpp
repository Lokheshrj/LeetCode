class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int m=INT_MAX,n=INT_MAX;
        for(auto x:nums)
        {
            if(x<=m)
            m=x;
            else if(x<=n)
            n=x;
            else
            return true;
        }
        return false;
    }
};
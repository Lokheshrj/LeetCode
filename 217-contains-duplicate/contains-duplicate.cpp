class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int>mp;
        for(int x:nums)
        {
            if(mp.find(x)!=mp.end())
                return true;
            else  
                mp.insert(x);
        }
        return false;
    }
};
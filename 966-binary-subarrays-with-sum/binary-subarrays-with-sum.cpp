class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) 
    {
        map<int,int>mp;
        mp[0]=1;
        int temp=0;
        int c=0;
        for(int num:nums)
        {
            temp+=num;
            if(mp[temp-goal])
                c+=mp[temp-goal];
            mp[temp]++;
        }
        return c;
    }
};
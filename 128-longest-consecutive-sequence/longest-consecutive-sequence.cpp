class Solution {
public:
    int longestConsecutive(vector<int>& nums) 
    {
        if(nums.size()==0)
            return 0;
        int longest=INT_MIN;
        sort(nums.begin(),nums.end());
        for(int n:nums)
            cout<<n;
        cout<<"\n";
        int count=0;
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i-1]+1==nums[i])
            {
                ++count;
            } 
            else if(nums[i-1]<nums[i])
            {
                if(longest<count)
                    longest=count;
                count=0;
            }
        }
        if(longest<count)
            longest=count;
        return longest+1;
    }
};
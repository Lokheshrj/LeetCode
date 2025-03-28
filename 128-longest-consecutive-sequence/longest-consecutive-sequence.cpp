class Solution {
public:
    int longestConsecutive(vector<int>& nums) 
    {
        if(nums.size()==0)
            return 0;
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int longest=INT_MIN;
        int count=0;
        for(int i=1;i<n;i++)
        {
            if(nums[i-1]+1==nums[i])
                ++count;
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
class Solution {
public:
    int longestSubarray(vector<int>& nums) 
    {
        int s=nums.size();
        int i=0,j=0;
        bool del=false;
        int maxx=0,lzi=0;
        while(j<s)
        {
            if(nums[j]==0)
            {
                if(!del)
                    del=true;
                else
                {
                    maxx=max(maxx,j-i-1);
                    i=lzi+1;
                }
                lzi=j;
            }
            ++j;
        }
        if(del)
            return max(maxx,j-i-1); 
        else 
           return j-i-1;
        
    }
};
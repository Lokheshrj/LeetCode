class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int max=INT_MIN,curr=0;
        for(int i:nums)
        {
            curr+=i;
            if(curr>max)
                max=curr; 
            if(curr<0)
                curr=0;
        }
        return max;
    }
};
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum=0;
        for(int x:nums)
            sum+=x;
        int n=nums.size();
        int miss=((n*(n+1))/2)-sum;
        return miss;    
    }
};
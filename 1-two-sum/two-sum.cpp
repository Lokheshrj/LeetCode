class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        for(auto i=0;i<nums.size()-1;++i)
        {
            for(auto j=i+1;j<nums.size();++j)
            {
                if(target==nums[i]+nums[j])
                    return {i,j};
            }
        }
        return {};
    }
};
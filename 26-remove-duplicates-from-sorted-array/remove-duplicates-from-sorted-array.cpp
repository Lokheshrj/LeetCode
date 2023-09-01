class Solution {
public:
    int removeDuplicates(vector<int>& nums) 
    {
        vector<int> dup;
        int i;
        for(i=0;i<nums.size()-1;i++)
        {
            if(nums[i]!=nums[i+1])
            dup.push_back(nums[i]);
        }
        dup.push_back(nums[i]);
        i=dup.size();
        nums.resize(i);
        nums.swap(dup);
        dup.clear();
        return i;
    }
};
class Solution {
public:
    int removeElement(vector<int>& nums, int val)
    {
        vector<int> dum;
        for(int i=0;i<nums.size();i++)
        {
            if(val!=nums[i])
            dum.push_back(nums[i]);
        }
        nums.resize(dum.size());
        nums.swap(dum);
        return nums.size();
    }
};
class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) 
    {
        sort(nums.begin(),nums.end());
        vector<int>res;
        int n=nums.size();
        for(int i=0;i<n;i++)
            if(!binary_search(begin(nums),end(nums),i+1))
                res.push_back(i+1);
        return res;
    }
};
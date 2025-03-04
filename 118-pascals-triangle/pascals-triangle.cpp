class Solution {
public:
    vector<vector<int>> generate(int nums) {
    if(nums==1)
        return {{1}};
    else if(nums==2)
        return {{1},{1,1}};
    vector<vector<int>>ans;
    ans.push_back({1});
    ans.push_back({1,1});
    for(int i=2;i<nums;i++)
    {
        vector<int>temp(i+1);
        temp[0]=1;
        temp[i]=1;
        for(int j=1;j<i;j++)
            temp[j]=ans[i-1][j-1]+ans[i-1][j];
        ans.push_back(temp);
    }
    return ans;
    }
};
class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        map<vector<int>,int> a;
           int ans=0;
        vector<int> loc;
        for(int i=0;i<grid.size();i++)
        {
            a[grid[i]]++;
        }
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[0].size();j++)
            {
                loc.push_back(grid[j][i]);
            }
            ans+=a[loc];
            loc.clear();
        }  
     
     
    
        return ans;
        
    }
};
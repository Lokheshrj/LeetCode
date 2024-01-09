class Solution {
public:
    void seek(vector<vector<char>>& grid,int i,int j)
    {
        
        if(i<0||i>=grid.size()||j<0||j>=grid[0].size()||grid[i][j]!='1')
        return;
        grid[i][j]=-1;
        seek(grid,i-1,j);
        seek(grid,i,j-1);
        seek(grid,i+1,j);
        seek(grid,i,j+1);
    }
    int numIslands(vector<vector<char>>& grid) 
    {
        int count=0;
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[0].size();j++)
            {
                if(grid[i][j]=='1')
                {
                    ++count;
                    seek(grid,i,j);
                }
            }
        }
        return count;
    }
};
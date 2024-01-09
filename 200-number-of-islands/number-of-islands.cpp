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
        int r,c;
        r=grid.size();
        c=grid[0].size();
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
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
class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) 
    {
        int p=0;
        int r=grid.size(),c=grid[0].size();
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                if(grid[i][j]==1)
                {
                    p+=4;
                    grid[i][j]=-1;
                    if(i+1<r&&grid[i+1][j]==-1)
                    p-=2;
                    if(j+1<c&&grid[i][j+1]==-1)
                    p-=2;
                    if(i>0&&grid[i-1][j]==-1)
                    p-=2;
                    if(j>0&&grid[i][j-1]==-1)
                    p-=2;
                }
            }
        } 
        return p; 
    }
};
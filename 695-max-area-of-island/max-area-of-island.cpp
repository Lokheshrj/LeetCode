class Solution {
public:

    void dfs(vector<vector<int>>&grid,int i,int j,int *a)
    {
        if(i<0||j<0||i>=grid.size()||j>=grid[0].size()||grid[i][j]!=1)
        return;
        if(grid[i][j]==1)
        {
            grid[i][j]=-1;
            ++(*a);
        }
        dfs(grid,i+1,j,a);
        dfs(grid,i,j+1,a);
        dfs(grid,i-1,j,a);
        dfs(grid,i,j-1,a);
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) 
    {
        int max=0;
        int m;
        int row=grid.size();
        int col=grid[0].size();
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
            {
                if(grid[i][j]==1)
                {
                    m=0;
                    dfs(grid,i,j,&m);
                    if(m>max)
                    max=m;
                }
            }
        }
        return max;
    }
};
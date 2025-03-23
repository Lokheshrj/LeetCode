class Solution {
public:
    long long int get_mincost(vector<long long int>&cost,vector<bool>&visited,int n)
    {
        long long int MMAX=1e17;
        long long int pos;
        for(int i=0;i<n;i++)
        {
            if(cost[i]<MMAX&&visited[i]==false)
            {
                MMAX=cost[i];
                pos=i;
            }

        }
        return pos;
    }
    int countPaths(int n, vector<vector<int>>& roads) 
    {
        int mod=1e9+7;
        long long int MAXX=1e17;
        vector<vector<int>>grid(n,vector<int>(n,0));
        for(int i=0;i<roads.size();i++)
        {
            int u=roads[i][0];
            int v=roads[i][1];
            grid[u][v]=roads[i][2];
            grid[v][u]=roads[i][2];
        }
        vector<bool>visited(n,false);
        vector<long long int>ways(n,0);
        vector<long long int>cost(n,MAXX);
        cost[0]=0;
        ways[0]=1;
        for(int i=0;i<n-1;i++)
        {
            int u=get_mincost(cost,visited,n);
            visited[u]=true;
            for(int v=0;v<n;v++)
            {
                if(!visited[v]&&grid[u][v]&&cost[u]!=MAXX)
                {
                    if(cost[u]+grid[u][v]<cost[v])
                    {
                        cost[v]=cost[u]+grid[u][v];
                        ways[v]=ways[u];
                    }
                    else if(cost[u]+grid[u][v]==cost[v])
                    {
                        ways[v]=ways[v]+ways[u];
                        ways[v]%=mod;
                    }
                }
            }
        }
        return ways[n-1];
    }
};
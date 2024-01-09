class Solution {
public:
    void dfs(int i,vector<vector<int>>&rooms,vector<int>&visited)
    {
        visited[i]=1;
        int s=rooms[i].size();
        for(auto k:rooms[i])
        {
            if(visited[k]==0)
            dfs(k,rooms,visited);
        }
    }
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        vector<int>visited(rooms.size(),0);
        dfs(0,rooms,visited);
        for(int x:visited)
        {
            if(x==0)
            return false;
        }
        return true;
    }
};
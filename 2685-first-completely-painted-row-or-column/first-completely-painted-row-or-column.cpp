class Solution {
public:
    int firstCompleteIndex(vector<int>& arr, vector<vector<int>>& mat) 
    {
        map<int,vector<int>>mp;
        int row=mat.size();
        int column=mat[0].size();
        vector<int>r(row,0);
        vector<int>c(column,0);
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<column;j++)
            {
                mp[mat[i][j]]={i,j};
            }
        }
        for(int i=0;i<row*column;i++)
        {
            // vector<int>& values=mp[arr[i]];
            int ro=mp[arr[i]][0];
            int co=mp[arr[i]][1];
            ++r[ro];++c[co];
            if(r[ro]==column||c[co]==row)
                {
                    return i;
                }
        }
        return -1;
    }
};
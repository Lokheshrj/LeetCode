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
            vector<int>& values=mp[arr[i]];
            for(int j=0;j<2;j++)
            {
                if(j==0)
                {
                    ++r[values[j]];
                    if(r[values[j]]==column)
                        return i;
                    
                }
                else
                {
                    ++c[values[j]];
                    if (c[values[j]]==row)
                    {
                        return i;
                    }
                }
            }
        }
        return 0;
    }
};
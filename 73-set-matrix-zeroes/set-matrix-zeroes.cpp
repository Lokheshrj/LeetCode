class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) 
    {
        int r=matrix.size();
        int c=matrix[0].size();
        bool col0=false;
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                if(matrix[i][j]==0)
                {
                    matrix[i][0]=0;
                    if(j==0)
                        col0=true;
                    else
                        matrix[0][j]=0;
                }
            }
        }

        for(int i=1;i<r;i++)
        {
            for(int j=1;j<c;j++)
            {
                if(matrix[0][j]==0||matrix[i][0]==0)
                    matrix[i][j]=0;
            }
        }

        if(matrix[0][0]==0)
        {
            for(int j=0;j<c;j++)
                matrix[0][j]=0;
        }   
        if(col0)
            for(int j=0;j<r;j++)
                matrix[j][0]=0;

    }
};
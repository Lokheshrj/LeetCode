class Solution {
public:
    bool H_B_S(vector<int>&matrix,int target)
    {
        int l=0,h=matrix.size()-1;
        int mid;
        while(l<=h)
        {
            mid=(l+h)/2;
            if(matrix[mid]==target)
                return true;
            else if(matrix[mid]>target)
                h=mid-1;
            else
                l=mid+1;
        }
        return false;
    }
    bool V_B_S(vector<vector<int>>& matrix, int target)
    {
        int col=matrix.size()-1;
        int l=0,h=col,mid;
        int greatest_least=-1;
        while(l<=h)
        {
            mid=(l+h)/2;
            if(matrix[mid][0]<=target)
            {
                l=mid+1;
                greatest_least=mid;
            }
            else
            {
                
                h=mid-1;
            }
        }
        cout<<"Goes Well"<<greatest_least;
        return greatest_least==-1?false:H_B_S(matrix[greatest_least],target);
    }
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        return V_B_S(matrix,target);
    }
};
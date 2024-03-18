class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
     sort(points.begin(),points.end(),[](vector<int>&p1,vector<int>&p2)
     {
        return p1[1]<p2[1];
     });
     int min=1;
     int prev=points[0][1];
     for(int i=1;i<points.size();i++)
     {
        if(points[i][0]<=prev)
        continue;
        else
        ++min;
        prev=points[i][1];
     }  
     cout<<min; 
     return min;   
    }
};
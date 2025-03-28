class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        if(intervals.size()==1)
            return intervals;
        vector<vector<int>>ans;
        sort(intervals.begin(),intervals.end());
        ans.push_back({intervals[0][0],intervals[0][1]});
        int start,end;
        for(int i=1;i<intervals.size();i++)
        {
            start=ans.back()[0];
            end=ans.back()[1];
            if(intervals[i][0]<=end&&intervals[i][1]>=end)
            {
                ans.back()[0]=start;
                ans.back()[1]=intervals[i][1];
            }
            else if(intervals[i][0]>end)
            {
                ans.push_back({intervals[i][0],intervals[i][1]}); 
                // continue;
            }
            // else
            // {
            //     // ans.push_back({intervals[i][0],intervals[i][1]}); 
            // }
        }
        return ans; 
    }
};
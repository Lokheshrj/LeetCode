class Solution {
public:
    int findMinDifference(vector<string>& timePoints) 
    {
        short int n=timePoints.size();
        int minutes[n];

        for(int i=0;i<n;i++)
            minutes[i]=stoi(timePoints[i])*60+stoi(timePoints[i].substr(3));

        sort(minutes,minutes+n);

        int minimum=INT_MAX;

        for(int i=0;i<n-1;i++)
            if((minutes[i+1]-minutes[i])<minimum)
                minimum=minutes[i+1]-minutes[i];

        int c=(24*60)-minutes[n-1]+minutes[0];
        
        return c<minimum?c:minimum;
    }
};
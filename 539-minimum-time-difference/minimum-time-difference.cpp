class Solution {
public:
    int findMinDifference(vector<string>& timePoints) 
    {
        vector<int>minutes;

        for(string s:timePoints)
           minutes.push_back(stoi(s)*60+stoi(s.substr(3)));

        sort(minutes.begin(),minutes.end());

        int minimum=INT_MAX,n=minutes.size();

        for(int i=0;i<n-1;i++)
            if((minutes[i+1]-minutes[i])<minimum)
                minimum=minutes[i+1]-minutes[i];

        if(((24*60)-minutes[n-1]+minutes[0])<minimum)
            return (24*60)-minutes[n-1]+minutes[0];
        return minimum; 
    }
};
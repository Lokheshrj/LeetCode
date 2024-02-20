class Solution {
public:
    vector<int> findPeaks(vector<int>& mountain) 
    {
        vector<int>res;
        int n=mountain.size()-1;
        for(int i=1;i<n;i++)
        {
            if(mountain[i]>mountain[i-1]&&mountain[i]>mountain[i+1])
            res.push_back(i);
        }
        return res;
    }
};
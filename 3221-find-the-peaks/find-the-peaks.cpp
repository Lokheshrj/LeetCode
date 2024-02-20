class Solution {
public:
    vector<int> findPeaks(vector<int>& mountain) 
    {
        vector<int>res;
        int n=mountain.size()-1;
        int l=0;
        int h=2;
        for(int i=1;i<n;i++)
        {
            if(mountain[i]>mountain[l]&&mountain[i]>mountain[h])
            res.push_back(i);
            ++l;
            ++h;
        }
        return res;
    }
};
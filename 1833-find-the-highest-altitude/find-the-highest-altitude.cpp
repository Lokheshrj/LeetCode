class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int a=0,m=0;
        for(auto i:gain)
        {
            a+=i;
            m=max(a,m);
        }
        return m; 
    }
};
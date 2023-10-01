class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        short int a=0,max=0;
        for(short int i=0;i<gain.size();i++)
        {
            a+=gain[i];
            if(a>max)
            max=a;
        }
        return max; 
    }
};
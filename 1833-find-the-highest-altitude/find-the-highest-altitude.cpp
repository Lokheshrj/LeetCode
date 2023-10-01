class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        short int a=0,max=0;
        int s=gain.size();
        for(int i=0;i<s;i++)
        {
            a+=gain[i];
            if(a>max)
            max=a;
        }
        return max; 
    }
};
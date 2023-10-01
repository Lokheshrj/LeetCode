class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        short int a=0,max=0;
        for(auto i:gain)
        {
            a+=i;
            if(a>max)
            max=a;
        }
        return max; 
    }
};
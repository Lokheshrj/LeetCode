class Solution {
public:
    int set_count(int n)
    {
        int c=0;
        while(n)
        {
            if(n&1)
                ++c;
            n=n>>1;
        }
        return c;
    }
    int minBitFlips(int start, int goal) 
    {
        return set_count(start^goal);
    }
};
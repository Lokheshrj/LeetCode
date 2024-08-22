class Solution {
public:
    int findComplement(int num) {
        if(num==1)
            return 0;
        int bl=0;
        unsigned int t=num;
        while(t)
        {
            t>>=1;
            ++bl;
        }
        unsigned int max=(1U<<bl)-1;
        unsigned int te=num|max;
        cout<<te;
        return te^num;
    }
};
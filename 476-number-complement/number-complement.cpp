class Solution {
public:
    int findComplement(int num) {
        if(num==1)return 0;
        if(num==0)return 1;
        
        short int bl=0;
        int t=num;
        while(t)
        {
            t>>=1;
            ++bl;
        }
        int max=(1U<<bl)-1;
        return max^num;
    }
};
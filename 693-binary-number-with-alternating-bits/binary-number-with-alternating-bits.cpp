class Solution {
public:
    bool hasAlternatingBits(int num) 
    {
        while(num)
        {
            int l=num&1;
            int sl=(num>>1)&1;
            if ((l^sl)==0) return false;
            num>>=1;
        }
        return true;
    }
    
};
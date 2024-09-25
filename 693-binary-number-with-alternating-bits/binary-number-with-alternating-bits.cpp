class Solution {
public:
    bool hasAlternatingBits(int num) {
        int c=0;
        if(num%2==0)
        {
            while(num)
            {
                if(num&1)
                    --c;
                else
                    ++c;
                num>>=1;
                if(c>1||c<0)
                    return false;
            }
        }
        else
        {
            while(num)
            {
                if(num&1)
                    ++c;
                else
                    --c;
                num>>=1;
                if(c>1||c<0)
                    return false;
            }
        } 
        return true;
        }
    
};
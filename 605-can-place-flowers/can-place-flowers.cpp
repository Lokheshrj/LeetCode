class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) 
    {
        int c=0;
        int s=flowerbed.size();
        if(s==1)
        {
            if((flowerbed[0]==0&&(n==1||n==0))||(flowerbed[0]==1&&n<1))
            return true;
            return false;
        }
        for(int i=0;i<s;i++)
        {
            if(i==0)
            {
                if(flowerbed[i]==0&&flowerbed[i+1]==0)
                {
                    flowerbed[i]=1;
                    ++c;
                }
            }
            else if(i==s-1)
            {
                if(flowerbed[i]==0&&flowerbed[i-1]==0)
                {
                    flowerbed[i]=1;
                     ++c;
                }
            }
            else
            {
                if(s>=3)
                {
                    if(flowerbed[i]==0&&flowerbed[i+1]==0&&flowerbed[i-1]==0)
                    {
                        flowerbed[i]=1;
                        ++c;
                    }
                }
            }
        }
        if(c>=n)
        return true;
        return false;
    }
};
class Solution {
public:
    vector<int> countBits(int n) 
    {
        int s,num;
        vector<int> result(n+1);
        for(int i=0;i<=n;i++)
        {
            s=0;
            num=i;
            while(num!=0)
            {
                s+=num%2;
                num/=2;
            }
            result[i]=s;
        }
        return result;
    }
};
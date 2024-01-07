class Solution {
public:
    vector<int> countBits(int n) 
    {
        int s,num;
        vector<int> result;
        for(int i=0;i<=n;i++)
        {
            s=0;
            num=i;
            while(num!=0)
            {
                s+=num%2;
                num/=2;
            }
            result.push_back(s);
        }
        return result;
    }
};
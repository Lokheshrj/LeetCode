class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) 
    {
        long long s=0;
        while(k)
        {
            make_heap(gifts.begin(),gifts.end());
            gifts[0]=floor(sqrt(gifts[0]));
            --k;  
        }
        for(int x:gifts)
            s+=x;
        return s;
        }
    };
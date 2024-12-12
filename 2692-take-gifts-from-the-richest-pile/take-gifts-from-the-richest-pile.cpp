class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        long long s=0;
    int n=gifts.size();
    while(k)
    {
        sort(gifts.begin(),gifts.end());
            gifts[n-1]=floor(sqrt(gifts[n-1]));
        --k;  
    }
    for(int x:gifts)
        s+=x;
    return s;
    }
};
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.size()==1)
            return 0;
        int maxx=0;
        int buy=INT_MAX,sell=0;
        for(int i=0;i<prices.size();i++)
        {
            if(prices[i]<buy)
            {
                maxx=max(sell-buy,maxx);
                buy=prices[i];
                sell=0;
            }
            else if(sell<prices[i])
                sell=prices[i];
        }
        return max(sell-buy,maxx);
    }
};
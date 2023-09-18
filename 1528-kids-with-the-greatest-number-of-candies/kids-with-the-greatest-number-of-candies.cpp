class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) 
    {
        vector<bool>result;
        int max=*max_element(candies.begin(),candies.end());
        int s=candies.size();
        for(int i=0;i<s;i++)
        {
            if(candies[i]+extraCandies>=max)
            result.push_back(1);
            else
            result.push_back(0);
        }
        return result;
    }
};
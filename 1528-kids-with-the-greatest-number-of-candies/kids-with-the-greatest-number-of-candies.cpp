class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) 
    {
        int max=*max_element(candies.begin(),candies.end());
        int s=candies.size();
        vector<bool>result(s,false);
        cout<<s;
        for(int i=0;i<s;i++)
        {
            if(candies[i]+extraCandies>=max)
            result[i]=1;
        }
        return result;
    }
};
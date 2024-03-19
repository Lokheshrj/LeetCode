class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) 
    {
        int c=0,maxi=0;
        map<char,int>mp;
        for(char ch:tasks)
        {
           int temp=++mp[ch];
           maxi=max(temp,maxi);
        }
        for(auto x:mp)
        {
            if(x.second==maxi)
            ++c;
        }
        int s=tasks.size();
        cout<<maxi<<n<<c;
        return max(((maxi-1)*(n+1)+c),s);
    }
};
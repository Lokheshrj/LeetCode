class Solution {
public:
    int converter(vector<int>&m,int n)
    {
        if(n<10)
            return m[n];
        stack<int>temp;
        int mv=0;
        while(n>0)
        {
            temp.push(n%10);
            n/=10;
        }
        while(!temp.empty())
        {
            mv*=10;
            mv+=m[temp.top()];
            temp.pop();
        }
        return mv;
    }
    vector<int> sortJumbled(vector<int>& mapping, vector<int>& nums) 
    {
        int t;
        map<int,list<int>>maps;
        short int s=nums.size();
        cout<<"result :\n";
        for(int i=0;i<s;i++)
        {
            t=converter(mapping,nums[i]);
            maps[t].push_back(nums[i]);
            cout<<t;
            nums[i]=t;  
        }
        sort(nums.begin(),nums.end());

        vector<int>ans;
        for(auto i:nums)
        {
            ans.push_back(maps[i].front());
            maps[i].pop_front();
        }
        return ans;
    }
};

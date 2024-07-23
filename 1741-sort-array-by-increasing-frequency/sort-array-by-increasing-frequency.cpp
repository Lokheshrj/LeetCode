class Solution {
public:
    static bool comparator(pair<int,int>&A,pair<int,int>&B)
    {
        if(A.second<B.second)
            return true;
        else if(A.second==B.second)
        {
            if(A.first>B.first)     
            return true;
        }
        return false;
    }
    vector<int> frequencySort(vector<int>& nums) {
       unordered_map<int,int>freq;
       for(auto x:nums)
            ++freq[x];
        vector<pair<int,int>>arr;
        for(auto &it:freq)
            arr.push_back(it);
        sort(arr.begin(),arr.end(),comparator);
        int c=0;
        for(auto x:arr)
            cout<<x.first<<" "<<x.second<<"\n";
        for(auto x:arr)
        {
            fill(nums.begin()+c,nums.begin()+x.second+c,x.first);
            c+=x.second;    
        }
        return nums;
    }
};
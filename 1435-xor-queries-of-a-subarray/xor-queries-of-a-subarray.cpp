class Solution {
public:
    void Prefix_Xor(vector<int>&a,vector<int>&arr,int n)
    {
        a[0]=arr[0];
        for(int i=1;i<n;++i)
        {
            a[i]=a[i-1]^arr[i];
        }
        for(int i:a)
            cout<<i;
    }
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) 
    {
        int n=arr.size();
        vector<int>r(n);
        Prefix_Xor(r,arr,n);
        vector<int> result;
        int i,j;
        for(auto a:queries)
        {
            i=a[0];
            j=a[1];
            if(i==0)
                result.push_back(r[j]);
            else
                result.push_back(r[j]^r[i-1]);
        }
        return result;
    }
};

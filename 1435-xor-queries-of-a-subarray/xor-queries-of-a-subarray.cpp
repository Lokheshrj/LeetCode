class Solution {
public:
    void Prefix_Xor(vector<int>& a, vector<int>& arr, int *n) 
    {
        a[0] = arr[0];
        for (int i = 1; i < *n; ++i)
            a[i] = a[i - 1] ^ arr[i];
    }
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) 
    {
         int n = arr.size();
        vector<int> r(n);
        Prefix_Xor(r, arr, &n);
        vector<int> result;
        for (auto a : queries)
            a[0] == 0?result.push_back(r[a[1]]):result.push_back(r[a[1]] ^ r[a[0] - 1]);
        return result;
    }
};

class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) 
    {
        int n=A.size();
        vector<int>mp(n,0);
        vector<int>ans;
        int count=0;
        for(int i=0;i<n;i++)
        {
            ++mp[A[i]-1];
            ++mp[B[i]-1];
            if(B[i]!=A[i])
            {
                if(mp[B[i]-1]>1)
                    ++count;
                if(mp[A[i]-1]>1)
                    ++count;
            }
            else
                ++count;
            ans.push_back(count);

        }
        return ans;
    }
};
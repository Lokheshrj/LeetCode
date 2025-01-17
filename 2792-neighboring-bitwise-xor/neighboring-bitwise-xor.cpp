class Solution {
public:
    bool doesValidArrayExist(vector<int>& derived) 
    {
        int n=derived.size();
        vector<int>ans(n,0);
        bool is_alternative=false;
        if(derived[0]==1)
            is_alternative=true;
        else
            is_alternative=false;
        if(is_alternative)
        {
            ans[0]=0;  
        }
        for(int i=0;i<n-1;i++)
        {
            if(derived[i]==1)
            ans[i+1]= !ans[i];
            else
            ans[i+1]=ans[i];
        }
        if(derived[n-1]==ans[0]^ans[n-1])
            return true;
        return false;
    }
};
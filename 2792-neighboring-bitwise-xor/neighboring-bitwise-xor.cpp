class Solution {
public:
    bool doesValidArrayExist(vector<int>& derived) 
    {
        int n=derived.size();
        int t2,t1=0;
        for(int i=0;i<n-1;i++)
        {
            if(derived[i]==1)
                t2=!t1;
            else
                t2=t1;
            t1=t2;
        }
        if(derived[n-1]==0^t1)
            return true;
        return false;
    }
};
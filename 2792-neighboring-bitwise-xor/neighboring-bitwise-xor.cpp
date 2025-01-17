class Solution {
public:
    bool doesValidArrayExist(vector<int>& derived) 
    {
        int n=derived.size();
        vector<int>ans(n,0);
        int t2,t1=0,first=0;
        for(int i=0;i<n-1;i++)
        {
            if(derived[i]==1)
            {

                t2=!t1;
                t1=t2;
            }
            else
            {
                t2=t1;
                t1=t2;
            }
        }
        if(derived[n-1]==first^t1)
            return true;
        return false;
    }
};
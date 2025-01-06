class Solution {
public:
    vector<int> minOperations(string boxes) 
    {
        int n=boxes.length();
        vector<int>prefix(n,0),suffix(n,0);
        int oc=boxes[0]-'0';
        for(int i=1;i<n;i++)
        {
            prefix[i]=prefix[i-1]+oc;
            if(boxes[i]=='1')
                ++oc;
        }

        oc=boxes[n-1]-'0';
        for(int i=n-2;i>=0;i--)
        {
            suffix[i]=suffix[i+1]+oc;
            if(boxes[i]=='1')
                ++oc;
        }

        for(int i=0;i<n;i++)
            suffix[i]+=prefix[i];
        
        return suffix;
    }
};
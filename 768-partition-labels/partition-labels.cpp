class Solution {
public:
    vector<int> partitionLabels(string s) {
        map<char, int> last ;
        vector<int> res = {};

        for(int k = 0 ; k < s.length() ; k++)
            last[s[k]] = k ;

        int endpt = last[s[0]] ;
        int startpt = 0 ;

        while(startpt < s.length())
        {
            endpt = last[s[startpt]] ;
            int cnt = 0 ;
            while(startpt <= endpt)
            {
                cnt++ ;
                endpt = max(endpt, last[s[startpt]]) ;
                startpt++ ;
            }
            res.push_back(cnt) ;
        }
        int result=0;
        for(int x:res)
        {
            result+=(x*x);
        }
        cout<<result;
        return res;
    }
};
class Solution {
public:
    vector<int> successfulPairs(vector<int>& s, vector<int>& p, long long success) {
        
        vector<int> pairs(s.size(),0);
        sort(p.begin(),p.end());
        
        for(int i=0;i<s.size();i++){
            int beg=0,end=p.size()-1;
            while(beg<=end){
                int mid = (beg + end) / 2;
                if( (long long int)s[i] * (long long int)p[mid] >= success){
                    end = mid - 1;
                }
                else{
                    beg = mid + 1;
                }
            }
            pairs[i] = p.size() - beg;
        }

        return pairs;
    }
};
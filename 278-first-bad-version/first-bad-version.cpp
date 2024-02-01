// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
    long long int l=1,h=n;
    int mid;
    while(l<h)
    {
        mid=(l+h)/2;
        if(isBadVersion(mid))
        {
            h=mid;
        }
        else
        l=mid+1;
        
    }
    return h;   
    }
};
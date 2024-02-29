class Solution {
public:
    void reverseString(vector<char>& s) {
      int n=s.size()-1;
      int l=0;
      char t;
      while(l<=n/2)
      {
          t=s[l];
          s[l]=s[n-l];
          s[n-l]=t;
          ++l;
      }
    }
};
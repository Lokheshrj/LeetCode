class Solution {
public:
    int strStr(string haystack, string needle) 
    {
        if(haystack.length()<needle.length())
        return -1;
      int ws=needle.length()-1;
      int j=0;
      while(ws!=haystack.length())
      {
          int k=0;
          int i;
          for(i=j;i<=ws;i++)
          {
            if (haystack[i]!=needle[k])
            break;
            ++k;
          }
          if(k==needle.length())
          return j;
          ++j;
          ++ws;
      } 
      return -1; 
    }
};
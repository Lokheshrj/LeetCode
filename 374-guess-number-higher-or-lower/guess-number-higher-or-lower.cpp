/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        int l=1;
        unsigned long long h=n;
        unsigned long long int m=0;
        int c;
        while(l<=h)
        {
            m=(l+h)/2;
            c=guess(m);
            if(c==0)
            break;
            else if(c<0)
                h=m-1;
            else
                l=m+1;
        }
        return m;
    }
};
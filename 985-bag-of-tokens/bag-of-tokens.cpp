class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        sort(tokens.begin(),tokens.end());
        int l=0;
        int h=tokens.size()-1;
        int s=0;
        int max_s=0;
        if(h==0)
        {
            if(tokens[l]<=power)
            return 1;
            return 0;
        }
        while(l<=h)
        {
            if(tokens[l]<=power)
            {
                power-=tokens[l];
                ++s;
                ++l;
                goto Arrive;
            }
            if(s)
            {
                power+=tokens[h];
                --s;
                --h;
            }
            else
            ++l;
            Arrive:
                if(s>max_s)
                    max_s=s;
            
        }
        return max_s;
    }

};
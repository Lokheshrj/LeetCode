class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        if(!(tokens.size()-1))
            return tokens[0]<=power?1:0;
        sort(tokens.begin(),tokens.end());
        int l=0,h=tokens.size()-1;
        int s=0,max_s=0;
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
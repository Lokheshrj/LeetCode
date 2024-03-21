class Solution {
public:
    vector<string> readBinaryWatch(int turnedOn) 
    {
        vector<string>result;
        for(short int i=0;i<12;i++)
        {
            for(short int j=0;j<60;j++)
            {
                if(__builtin_popcount(i)+__builtin_popcount(j)==turnedOn)
                {
                    result.push_back( to_string(i) + ":" + (j<10?"0":"") + to_string(j) );
                }
            }
        }
        return result;
    }
};
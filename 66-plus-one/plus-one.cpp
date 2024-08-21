class Solution {
public:
    vector<int> plusOne(vector<int>& digits) 
    {
        int i=digits.size()-1;
        for(;i>=0;--i)
        {
            if(digits[i]>=0&&digits[i]<=8)
            {
                digits[i]+=1;
                break;
            }
            else 
            {
                digits[i]=0;
            }
        }
        if(i==-1)
            digits.insert(digits.begin(),1);
        return digits;
    }
};
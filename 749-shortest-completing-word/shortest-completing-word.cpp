class Solution {
public:
    string shortestCompletingWord(string licensePlate, vector<string>& words) 
    {
        map<char,int>mp;
        for(char ch:licensePlate)
        {
            if((ch>='A'&&ch<='Z')||(ch<='z'&&ch>='a'))
            ++mp[tolower(ch)];
        }
        map<char,int>temp;
        short int s=15;
        for(string str:words)
        {
            temp=mp;
            for(char ch:str)
            {
                if(temp[ch])
                    --temp[ch];
                if(temp[ch]==0)
                    temp.erase(ch);
            }
            if(temp.size()==0)
            {
                if(str.length()<s)
                {
                    s=str.length();
                    licensePlate=str;
                }
            }
        }
        return licensePlate;
        return "";
    }








};
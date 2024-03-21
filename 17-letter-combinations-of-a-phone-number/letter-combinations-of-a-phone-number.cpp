class Solution {
public:
    void combination(int index,string ans,vector<string>&mp,string &digits,vector<string>&result)
    {
        if(index==digits.length())
        {
            result.push_back(ans);
            return;
        }
        for(char ch:mp[digits[index]-'0'])
        {
            combination(index+1,ans+ch,mp,digits,result);
        }
    }
    vector<string> letterCombinations(string digits) 
    {
        if(!digits.length())
        return {};
        vector<string>mp(10);
        mp[2]="abc";
        mp[3]="def";
        mp[4]="ghi";
        mp[5]="jkl";
        mp[6]="mno";
        mp[7]="pqrs";
        mp[8]="tuv";
        mp[9]="wxyz";
        vector<string>result;
        combination(0,"",mp,digits,result);
        return result;
    }
};
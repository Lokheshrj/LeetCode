class Solution {
public:
    int longestCommonPrefix(vector<int>& arr1, vector<int>& arr2) 
    {
        map<string,int>prefix;
        for(int num:arr1)
        {
            string str=to_string(num);
            string prefix_combinations="";
            for(char ch:str)
            {
                prefix_combinations+=ch;
                prefix[prefix_combinations]++;
            }
        }
        int ml=0;
        for(int n:arr2)
        {
            string str=to_string(n);
            string prefix_combinations="";
            for(char ch:str)
            {
                prefix_combinations+=ch;
                if(prefix.find(prefix_combinations)!=prefix.end())
                {
                    cout<<prefix_combinations<<"\n";
                    ml=max(ml,static_cast<int>(prefix_combinations.length()));
                }
            }
        }
        return ml;
    }
};
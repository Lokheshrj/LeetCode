class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) 
    {
        map<string,vector<string>>ans;
        for(string word:strs)
        {
            string key="";
            vector<int>position(26,0);
            for(char ch:word)
                position[ch-'a']++;
            for(int x:position)
                key+=to_string(x)+"*";
            ans[key].push_back(word);
        }

        vector<vector<string>>layers;
        for(auto x:ans)
        {
            vector<string>layer;
            for(auto y: ans[x.first])    
                layer.push_back(y);
            layers.push_back(layer);
        }
        return layers;
    }
};
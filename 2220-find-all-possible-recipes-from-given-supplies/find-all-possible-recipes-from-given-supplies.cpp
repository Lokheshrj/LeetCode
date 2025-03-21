class Solution {
public:
    vector<string> findAllRecipes(vector<string>& recipes, vector<vector<string>>& ingredients, vector<string>& supplies) 
    {
        unordered_map<string,bool>supplies_status;
        for(auto x:supplies)
            supplies_status[x]=true;
        int i,j;
        queue<int>recipes_q;

        for(int i=0;i<recipes.size();i++)
            recipes_q.push(i);
        int prev_size=-1;
        int curr=supplies_status.size();
        while(curr>prev_size)
        {
            prev_size=supplies_status.size();
            int q_size=recipes_q.size();
            while(q_size--)
            {
                bool possible=true;
                int recipe=recipes_q.front();
                recipes_q.pop();
                for(j=0;j<ingredients[recipe].size();j++)
                {
                    if(!(supplies_status.contains(ingredients[recipe][j])))
                    {
                        possible=false;
                        break;
                    }
                }
                if(possible)
                    supplies_status[recipes[recipe]]=true;
                else
                    recipes_q.push(recipe);
            }
            curr=supplies_status.size();
        }

        vector<string>ans;
        for(string recipe:recipes)
        {
            if(supplies_status.contains(recipe))
            {
                ans.push_back(recipe);
            }
        }  
        return ans;
    }
};
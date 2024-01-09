class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) 
    {
        vector<int>ans;
        for(int i=0;i<asteroids.size();i++)
        {
            if(asteroids[i]>0||asteroids.empty())
            {
                ans.push_back(asteroids[i]);
            }
            else
            {
                while(!ans.empty()&&*ans.rbegin()>0&&*ans.rbegin()<abs(asteroids[i]))
                {
                    ans.pop_back();
                }
                if(!ans.empty()&&*ans.rbegin()==abs(asteroids[i]))
                ans.pop_back();
                else
                {
                    if(ans.empty()||*ans.rbegin()<0)
                    {
                        ans.push_back(asteroids[i]);
                    }
                }
            }
        }
        return ans;
    }
};
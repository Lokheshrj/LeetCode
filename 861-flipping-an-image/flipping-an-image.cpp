class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        
        for(vector<int>&x:image)
        {
            for(int &y:x)
                y=!(y);
            reverse(x.begin(),x.end());
        }
            
        return image;
    }
};
class Solution {
public:
    int majorityElement(vector<int>& nums) {
       int c=0,element;
       for(int i=0;i<nums.size();i++)
       {
            if(c==0)
            {
                element=nums[i];
            }
            if(element==nums[i])
                c++;
            else    
                c--;
       } 
       return element;
    }
};
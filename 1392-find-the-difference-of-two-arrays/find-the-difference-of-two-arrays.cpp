class Solution {
public:
    bool binary_search(vector<int>& arr,int key)
    {
        int l=0,h=arr.size()-1,m;
        while(l<=h)
        {
            m=(l+h)/2;
            if(arr[m]<key)
                l=m+1;
            else if(arr[m]>key)
                h=m-1;
            else
            return false;
        }
        return true;
    } 
    /*vector<int>* remove_dup(vector<int>&arr)
    {
        vector<int>*res;
        if(arr.size()>1)
        {
            for(int i=0;i<arr.size()-1;i++)
            {
                if(arr[i]!=arr[i+1])
                res->push_back(arr[i]);
            }
        }
        return res;
    }*/
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) 
    {
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        vector<int>t1; 

        for(int i=0;i<nums1.size();i++)
            {
                if(i!=nums1.size()-1)
                {
                    if(nums1[i]!=nums1[i+1])
                        t1.push_back(nums1[i]);
                }
                else
                    t1.push_back(nums1[i]);
            }

        nums1=t1;
        t1.clear();

        for(int i=0;i<nums2.size();i++)
            {
                if(i!=nums2.size()-1)
                {
                    if(nums2[i]!=nums2[i+1])
                        t1.push_back(nums2[i]);
                }
                else
                    t1.push_back(nums2[i]);
            }
        nums2=t1;
        t1.clear();

        vector<vector<int>> res;
        vector<int>dum;

        for(int i=0;i<nums1.size();i++)
            if(binary_search(nums2,nums1[i]))
            dum.push_back(nums1[i]);

        res.push_back(dum);
        dum.clear();

        for(int i=0;i<nums2.size();i++)
            if(binary_search(nums1,nums2[i]))
            dum.push_back(nums2[i]);

        res.push_back(dum);
        return res;
    }
};
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

    vector<int>remove_dup(vector<int>&a)
    {
        vector<int>t1;
            for(int i=0;i<a.size();i++)
            {
                if(i!=a.size()-1)
                {
                    if(a[i]!=a[i+1])
                        t1.push_back(a[i]);
                }
                else
                    t1.push_back(a[i]);
            }
            return t1;
    }

    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) 
    {
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        nums1=remove_dup(nums1);
        nums2=remove_dup(nums2);

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
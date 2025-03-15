class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) 
    {
        // m=nums1.size();
        // n=nums2.size();
        int tot=m+n;
        int gap=(tot/2)+(tot%2);
        
        while(gap>0)
        {
            int left=0;
            int right=left+gap;
            while(right<tot)
            {
                if(left<m&&right<m)
                {
                    if(nums1[left]>nums1[right])
                    {
                        swap(nums1[left],nums1[right]);
                    }
                }
                else if(left<m&&right>=m)
                {
                    if(nums1[left]>nums2[right-m])
                    {
                        swap(nums1[left],nums2[right-m]);
    
                    }
                }
                else 
                {
                    if(nums2[left-m]>nums2[right-m])
                    {
                        swap(nums2[left-m],nums2[right-m]);
                    }
                }
                left++;
                right++;
            }
            if(gap==1)
                break;
            gap=(gap/2)+(gap%2);
            }
        for(int i=0;i<n;i++)
            nums1[m+i]=nums2[i];
    }
};
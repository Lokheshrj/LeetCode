/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsize, int target, int* returnSize)
{
    int t1,t2,i,j;
    for(i=0;i<numsize-1;++i)
    {
        t1=nums[i];
        for(j=i+1;j<numsize;++j)
        {
            t2=nums[j];
            if(t1+t2==target)
            {
                t1=i;t2=j;
                i=numsize;
                break;
            }
        }
    }
    *returnSize=2;
    int *ptr=(int*)malloc(2*sizeof(int));
    ptr[0]=t1;
    ptr[1]=t2;
    return ptr;
}
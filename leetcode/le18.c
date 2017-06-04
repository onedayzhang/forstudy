#include <stdio.h>
#include <malloc.h>
int swap(int *a,int *b)
{
	int tmp=*b;
	*b=*a;
	*a=tmp;
	return 0;
}

void quick_sort(int *num,int start,int end)
{
	int i,j,k;
	i=start;j=end;
	k=num[start];
	while(i<j)
	{
		while(num[j]>=k&&i<j)
		{
			j--;
		}
		if(i<j)
		{
			num[i]=num[j];
			num[j]=k;
		}

		while(num[i]<k&&i<j)
		{
			i++;
		}
		if(i<j)
		{
			num[j]=num[i];
			num[i]=k;
		}
	}
	if(i-1>start)
	quick_sort(num,start,i-1);
	if(end>i+1)
	quick_sort(num,i+1,end);
}


int** threeSum(int* nums, int numsSize, int* returnSize) {
	int i,j,k;
	int **res=NULL;
	int size=0;
    int total=64;
	int n;
	res=(int**)malloc(sizeof(int*)*total);
    for(i = 0; i < total; ++i)
        res[i] = (int *)malloc(sizeof(int) * 3);
	quick_sort(nums,0,numsSize-1);
	for(i=0;i<numsSize-2;i++)
	{
		if(i>0 && nums[i]==nums[i-1])
		{
			continue;
		}
		j=i+1;
		k=numsSize-1;
		while(j<k)
		{
			if((nums[i]+nums[j]+nums[k])<0)
			{
				j++;
			}
			else if((nums[i]+nums[j]+nums[k])>0)
			{
				k--;
			}
			else
			{
				res[size][0]=nums[i];
				res[size][1]=nums[j];
				res[size][2]=nums[k];
				while(j<k && res[size][1]==nums[j])
				j++;
				while(j<k && res[size][2]==nums[k])
				k--;
				size++;
				if(size==total)
                {
                    total<<=1;
                    res=(int**)realloc(res,sizeof(int*)*total);    
                    for(n = size; n < total; ++n)
                        res[n] = (int *)malloc(sizeof(int) * 3);
                }
			}
		}
	}
	*returnSize=size;
	return res;
/**
* Return an array of arrays of size *returnSize.
* Note: The returned array must be malloced, assume caller calls free().
*/
int** fourSum(int* nums, int numsSize, int target, int* returnSize) {

}

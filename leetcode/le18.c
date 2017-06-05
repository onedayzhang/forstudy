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

/**
* Return an array of arrays of size *returnSize.
* Note: The returned array must be malloced, assume caller calls free().
*/
int** fourSum(int* nums, int numsSize, int target, int* returnSize) {
	int h,i,j,k;
	int **res=NULL;
	int size=0;
	int sum=0;
    int total=64;
	int n;
	res=(int**)malloc(sizeof(int*)*total);
    for(i = 0; i < total; ++i)
        res[i] = (int *)malloc(sizeof(int) * 4);
	quick_sort(nums,0,numsSize-1);
	
	for(h=0;h<numsSize-3;h++)
	{	
		if(h>0 && nums[h]==nums[h-1])
		{
			continue;
		}
		for(i=h+1;i<numsSize-2;i++)
		{
			if(i>h+1 && nums[i]==nums[i-1])
			{
				continue;
			}
			j=i+1;
			k=numsSize-1;
			while(j<k)
			{
				if((nums[h]+nums[i]+nums[j]+nums[k]-target)<0)
				{
					j++;
				}
				else if((nums[h]+nums[i]+nums[j]+nums[k]-target)>0)
				{
					k--;
				}
				else
				{
					res[size][0]=nums[h];
					res[size][1]=nums[i];
					res[size][2]=nums[j];
					res[size][3]=nums[k];
					while(j<k && res[size][2]==nums[j])
					j++;
					while(j<k && res[size][3]==nums[k])
					k--;
					size++;
					if(size==total)
	                {
	                    total<<=1;
	                    res=(int**)realloc(res,sizeof(int*)*total);    
	                    for(n = size; n < total; ++n)
	                        res[n] = (int *)malloc(sizeof(int) * 4);
	                }
				}
			}
		}
	}
	*returnSize=size;
	return res;
}

int main(int argc,char * argv [ ])
{			  -4,-1,-1,0,1,2
	int a[6]={-1,0,1,2,-1,-4};
	int **ret=NULL;
	int retsize=0;
	ret=fourSum(a,6,0,&retsize);
	if(retsize!=0)
	{
		printf("%d %d %d %d\n",ret[retsize-1][0],ret[retsize-1][1],ret[retsize-1][2],ret[retsize-1][3]);
		retsize--;
	}
	return 0;
}
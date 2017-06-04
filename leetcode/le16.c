#include <stdio.h>
#include <math.h>
#include <limits.h>
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
/*
Given an array S of n integers, find three integers in S such that the sum is closest to a given number, target. Return the sum of the three integers. You may assume that each input would have exactly one solution.

For example, given array S = {-1 2 1 -4}, and target = 1.

The sum that is closest to the target is 2. (-1 + 2 + 1 = 2).Given an array S of n integers, find three integers in S such that the sum is closest to a given number, target. Return the sum of the three integers. You may assume that each input would have exactly one solution.

For example, given array S = {-1 2 1 -4}, and target = 1.

The sum that is closest to the target is 2. (-1 + 2 + 1 = 2).
*/
int threeSumClosest(int* nums, int numsSize, int target) {
	int i,j,k;
	int sum=0,diff=INT_MAX,ret=0;
	quick_sort(nums,0,numsSize-1);
	if(numsSize<3)
	return 0;
	for(i=0;i<numsSize-2;i++)
	{
		j=i+1;
		k=numsSize-1;
		while(j<k)
		{
			sum=nums[i]+nums[j]+nums[k]-target;
			if(sum==0)
			{
				return target;
			}
			else if(sum>0)
			{
				if(sum<diff)
				{
					diff=sum;
					ret=nums[i]+nums[j]+nums[k];
				}
				k--;
			}
			else if(sum<0)
			{
				if(0-sum<diff)
				{
					diff=0-sum;
					ret=nums[i]+nums[j]+nums[k];
				}
				j++;
			}
		}
	}
	return ret;
}

int main()
{
	return 0;
}

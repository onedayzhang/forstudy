#include <stdio.h>

int swap(int *a,int *b)
{
	int tmp=*b;
	*b=*a;
	*a=tmp;
}

int quick_sort(int *num,int start,int end)
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
int** threeSum(int* nums, int numsSize, int* returnSize) {
	return NULL;
}

int main()
{
	int i;
	int a[10]={123,23,3,45,67,78,12,98,121,23};
	quick_sort(a,0,9);
	for(i=0;i<10;i++)
	printf("%d ",a[i]);
	printf("\n");
}

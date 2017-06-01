#include <stdio.h>

int swap(int *a,int *b)
{
	int tmp=*b;
	*b=*a;
	*a=tmp;
}

int quick_sort(int *num,int size)
{
	int i,j;
	int k=num[0];
	if(size==1)
	return 0;
	i=1;j=size-1;
	while(i<j)
	{
		if(num[i]<k)
		{
			i++;
		}
		if(num[j]>k)
		{
			j--;
		}
//		if(i!=j)
		{
			swap(&num[i],&num[j]);
		}
	}
	swap(&num[i],&num[0]);
	quick_sort(num,i);
	quick_sort(num+i,size-j+1);
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
	quick_sort(a,10);
	for(i=0;i<10;i++)
	printf("%d ",a[i]);
	printf("\n");
}

#include <malloc.h>
#include <stdio.h>


int* searchRange(int* nums, int numsSize, int target, int* returnSize) {

	int *p=(int*)malloc(sizeof(int)*2);
	int i=0;
	int setmin=0;
	*p=-1;*(p+1)=-1;
	*returnSize=2;
	for(i=0;i<numsSize;i++)
	{
		if(nums[i]==target && setmin == 0)
		{
			*p=i;
			*(p+1)=i;
			setmin=1;
		}
		if(nums[i]==target)
		{
			*(p+1)=i;
		}
	}
	return p;    
}

int main(int argc,char argv[])
{
	int a[1]={1};
	int b=2;
	int *p = searchRange(a,1,0,&b);
	printf("%d,%d\n",*p,*(p+1));
}

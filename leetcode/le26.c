#include <stdio.h>
int removeDuplicates(int* nums, int numsSize) {

	int i,j;
	if(numsSize<2)
		return numsSize;
	i=0;j=1;
	while(j<numsSize)
	{
		if(nums[i]==nums[j])
		{
			j++;
		}
		else
		{
			if(j-i>1)
			{
				nums[i+1]=nums[j];
			}
			i++;
		}
	}
	return i;
}

int main()
{
	int a[10]={1,2,3,3,5,5,7,7,8,9};
	printf("%d\n",removeDuplicates(a,10));
	for(int i=0;i<10;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n");
}

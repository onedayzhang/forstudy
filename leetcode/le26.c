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
			if(j==numsSize)
			{
				i++;
			}
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
	int a[2]={1,1};
	printf("%d\n",removeDuplicates(a,2));
	for(int i=0;i<10;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n");
}

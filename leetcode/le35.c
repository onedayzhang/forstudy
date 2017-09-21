#include <stdio.h>

int searchInsert(int* nums, int numsSize, int target) {

	int i;
	for(i=0;i<numsSize;i++)
	{
		if(nums[i]>=target)
			break;
	}
	return i;
}

int main()
{
	int a[4]={1,3,5,6};
	printf("%d\n",searchInsert(a,4,5));
	return 0;
}

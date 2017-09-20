#include <stdio.h>



int firstMissingPositive(int* nums, int numsSize) {
	long long int tmp=0;
	int i;
	for(i=0;i<numsSize;i++)
	{
		if(nums[i]>0)
		{
			printf("%d\n",nums[i]);
			tmp|=1<<(nums[i]);
		}
	}
	printf("%lld\n",tmp);
	for(i=1;i<=numsSize;i++)
	{
		printf("%d\n",i);
		if((tmp&(1<<i))==0)
			break;
	}
	return i;
}

int main()
{
	int a[65]={10,4,16,54,17,-7,21,15,25,31,61,1,6,12,21,46,16,56,54,12,23,20,38,63,2,27,35,11,13,47,13,11,61,39,0,14,42,8,16,54,50,12,-10,43,11,-1,24,38,-10,13,60,0,44,11,50,33,48,20,31,-4,2,54,-6,51,6};
	printf("%d\n",firstMissingPositive(a,65));
}

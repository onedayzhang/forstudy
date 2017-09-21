#include <stdio.h>


#if 0
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
#endif

int firstMissingPositive(int* nums, int numsSize) {
	int tmp;
	int i;
	for(i=0;i<numsSize;i++)
	{
		while(nums[i]>0&&nums[i]<=numsSize && nums[i]!=nums[nums[i] - 1])
		{
		//	swap(nums[i],nums[nums[i]-1]);
			tmp=nums[i];
			nums[i]=nums[tmp-1];
			nums[tmp-1]=tmp;
		}
	}
	for(i=0;i<numsSize;i++)
	{
		if(nums[i]!=(i+1))
			break;
	}
    return (i+1);
}


int main()
{
	int a[2]={1,1};
	printf("%d\n",firstMissingPositive(a,2));
}

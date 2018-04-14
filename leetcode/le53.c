#include <stdio.h>

int max_int(int a, int b)
{
	return a>b? a:b;
}

int maxSubArray(int* nums, int numsSize) {
	int max=0;
	int sum=0;
	if(numsSize!=0)
		max=sum=nums[0];
	for(int i=1;i<numsSize;i++)
	{
		sum=max_int(sum+nums[i],nums[i]);
		if(sum>max)
			max=sum;
	}
	return max;
}
int main()
{
	int a[9]={-2,1,-3,4,-1,2,1,-5,4};
	printf("%d\n",maxSubArray(a,9));
	return 0;
}

#include <stdio.h>

int jump(int* nums, int numsSize) {
	int max=0,temp=0,num=0;
	for(int i=0;i<numsSize;)
	{
		if(temp>=numsSize-1)
			break;
		while(i<=temp)
		{
			if(nums[i]+i>max)
				max=nums[i]+i;
			i++;
		}
		temp=max;
		num++;
	}
	return num;
}

int main()
{
	int a[5]={2,3,1,1,4};
	printf("%d\n",jump(a,5));
}

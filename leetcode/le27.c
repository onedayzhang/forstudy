#include <stdio.h>
int removeElement(int* nums, int numsSize, int val) {
	int i,j;
	int size=numsSize;
	i=0;
	j=numsSize-1;
	while(i<j)
	{
		if(nums[j]==val)
		{
			size--;
			j--;
			continue;
		}
		if(nums[i]==val)
		{
			nums[i]=nums[j];
			size--;
		//	i++;
			j--;
		}
		else
		{
			i++;
		}
	}
	if(size==1 && nums[j]==val)
	return 0;
	return size;
}

int main()
{
	int a[3]={2,3,3};
	printf("%d\n",removeElement(a,3,3));
}

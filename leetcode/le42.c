#include <stdio.h>
int trap(int* height, int heightSize) {
	int low=0; int high=heightSize-1;
	int res=0;
	int i=0,j=0;
	while(low<high)
	{
		if(height[low]>i) i=height[low];
		if(height[high]>j) j=height[high];

		if(i<=j)
		{
			res+=i-height[low];
			low++;
		}
		else
		{
			res+=j-height[high];
			high--;
		}
	}
	return res;
}


int main()
{
	int a[12]={0,1,0,2,1,0,1,3,2,1,2,1};
	printf("%d\n",trap(a,12));
	return 0;
}

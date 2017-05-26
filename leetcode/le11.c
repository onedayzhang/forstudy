#include <stdio.h>
#if 0
int min(int a, int b)
{
	if(a>b)
		return b;
	return a;
}

int maxArea(int* height, int heightSize) {
    int i,j;
	int max=0;
	if(heightSize<2)
	{
		return 0;
	}
	for(i=0;i<heightSize-1;i++)
	{
		for(j=i;j<heightSize;j++)
		{
			if((j-i)*min(height[i],height[j])>max)
			{
				max=(j-i)*min(height[i],height[j]);
			}
		}
	}
	return max;
}
#endif
int maxArea(int* height, int heightSize) {
	int i=0, j=heightSize-1;
	int maxwater=0;
	int water,h;
	while(i<j)
	{
		h=height[i]>height[j]?height[j]:height[i];
		water=(j-i)*h;
		if(water>maxwater)
		{
			maxwater=water;
		}
		while(height[i]<=h && i<j) i++;
		while(height[j]<=h && i<j) j--;
	}
	return maxwater;
}
int main()
{
	int a[8]={6,2,3,11,2,11,2,6};
	printf("%d\n",maxArea(a,8));
	return 0;
}

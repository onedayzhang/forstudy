#include <stdio.h>

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

int main()
{
	int a[5]={3,2,3,4,5};
	printf("%d\n",maxArea(a,5));
	return 0;
}

//given n, find the number of different ways to write n as the sum of 1, 3, 4

#include <stdio.h>
#define MAX 2048 
int writeways(int n)
{
	int i;
	int a[MAX]={0};
	a[0]=a[1]=a[2]=1;
	a[3]=2;
	for(i=4;i<=n;i++)
	{
		a[i]=a[i-1]+a[i-3]+a[i-4];
	}
	return a[n];
}

int main(int argc ,char *argv[])
{
	printf("%d\n",writeways(atoi(argv[1])));
}

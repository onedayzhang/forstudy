/*
如果我们有面值为1元、3元和5元的硬币若干枚，如何用最少的硬币凑够11元？
*/
#include <stdio.h>

int min(int a,int b,int c)
{
	int min=a;
	if(b<min)
		min=b;
	if(c<min)
		min=c;
	return min;
}

int main()
{
	int d[20]={0};
	int i=0,j=0;
	d[0]=0;
	d[1]=1;
	d[2]=2;
	d[3]=1;
	d[4]=2;
	d[5]=1;
	int coin[3]={1,3,5};
	for(i=6;i<20;i++)
	{
		d[i]=min((d[i-coin[0]]+1),(d[i-coin[1]]+1),(d[i-coin[2]]+1));
		printf("d[%d]=%d\n",i,d[i]);
	}
}

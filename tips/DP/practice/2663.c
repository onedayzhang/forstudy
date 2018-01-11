// http://poj.org/problem?id=2663
#include <stdio.h>
int calnum(int n)
{
	int pre2=0,pre1=0;
	int i=1,sum=0;
	if(n==0)
		return 1;
	if(n==2)
		return 3;
	if(n%2!=0)
		return 0;
	pre2=1;pre1=3;
	for(i=1;i<=n/2-1;i++)
	{
		sum=4*pre1-1*pre2;
		pre2=pre1;
		pre1=sum;
	}
	return sum;
}



int main(int argc,char *argv[])
{
	printf("%d\n",calnum(atoi(argv[1])));
}

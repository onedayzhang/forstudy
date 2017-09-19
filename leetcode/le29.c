#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int divide(int dividend, int divisor) {
	long long res=0;
	if(!divisor||(dividend==INT_MIN&&divisor==-1))
		return INT_MAX;
	int sign=(dividend<0)^(divisor<0)? -1:1;
	long long u_dividend =abs(dividend);
	long long u_divisor=abs(divisor);
	while(u_dividend>=u_divisor)
	{
		long long tmp=u_divisor,multi=1;
		while(u_dividend>=(tmp<<1))
		{
			tmp<<=1;
			multi<<=1;
		}
		u_dividend-=tmp;
		res+=multi;
	}
	return sign*res;
}

int main(int argc,char *argv[])
{
	printf("%d\n",divide(atoi(argv[1]),atoi(argv[2])));
	return 0;
}

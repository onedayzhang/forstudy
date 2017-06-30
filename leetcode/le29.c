#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#define MAX_INT 0
int divide(int dividend, int divisor) {
	long long res=0;
	
	if(dividend<divisor)
	return 0;
	while(dividend>divisor)
	{
		dividend-=divisor;
		res++;
		if(res>INT_MAX)
		return MAX_INT;
	}
}

int main(int argc,char *argv[])
{
	printf("%d\n",divide(atoi(argv[1]),atoi(argv[2])));
	return 0;
}

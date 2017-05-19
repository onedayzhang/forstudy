#include <stdio.h>
#include <limits.h>
int reverse(int x) {
    long long int sum=0;
	while(x!=0)
	{
		sum=sum*10+x%10;
		x=x/10;
	}
	return (sum>INT_MAX ||sum<INT_MIN)? 0:sum;
}
int main(int argc,char* argv[])
{
	printf("%d\n",reverse(atoi(argv[1])));
}

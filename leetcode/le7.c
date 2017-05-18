#include <stdio.h>
int reverse(int x) {
    int sum=0;
	while(x!=0)
	{
		sum=sum*10+x%10;
		x=x/10;
	}
	return sum;
}
int main(int argc,char* argv[])
{
	printf("%d\n",reverse(atoi(argv[1])));
}

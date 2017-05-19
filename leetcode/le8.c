#include <stdio.h>
#include <limits.h>
int myAtoi(char* str) {
	long long int res=0;
	int sign=1;
	if(str==NULL)
		return 0;
	if(*str=='-')
	{
		sign=-1;
		str++;
	}
	while(*str!='\0')
	{
		if(*str>'0'&&*str<'9')
		{
			res=res*10+(*str-'0');
			str++;
		}
		else
		{
			return 0;
		}
	}
	return (res*sign>INT_MAX ||res*sign<INT_MIN)? 0:res*sign;
}

int main(int argc ,char* argv[])
{
	printf("%d\n",myAtoi(argv[1]));
}

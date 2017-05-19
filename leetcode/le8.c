#include <stdio.h>
#include <limits.h>
#include <string.h>
int myAtoi(char* str) {
	long long int res=0;
	int sign=1;
	if(str==NULL)
		return 0;
	while(*str==' ')
	{
		str++;
	}
	if(*str=='-'||*str=='+')
	{
		if(*str=='-')
		{
			sign=-1;
		}
		str++;
	}
	while(*str!='\0')
	{
		if(*str>='0'&&*str<='9')
		{
			res=res*10+(*str-'0');
			str++;
		}
		else
		{
			break;
		}
		if(res*sign>INT_MAX)
		{
			return INT_MAX;
		}
		else if(res*sign<INT_MIN)
		{
			return INT_MIN;
		}
	}
	return res*sign;
//	return (res*sign>INT_MAX ||res*sign<INT_MIN)? 0:res*sign;
}

int main(int argc ,char* argv[])
{
	printf("%d\n",myAtoi(argv[1]));
}

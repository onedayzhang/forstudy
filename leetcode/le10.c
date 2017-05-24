#include <stdio.h>
#include <stdbool.h>
bool isMatch(char* s, char* p) {
    if(s==NULL||p==NULL)
	{
		return false;
	}
	if(*p=='\0')
	{
		return (*s=='\0');
	}
	if(*(p+1)!='*')
	{
		if(*p == *s ||*p=='.')
		{
			return isMatch(s+1,p+1);
		}
	}
	else
	{
		if(*p!=*s&&*p!='.')
		{
			return isMatch(s,p+2);
		}
		else
		{
			return isMatch(s+1,p);
		}
	}
	return false;
}

int main(int argc,char* argv[])
{
	printf("%d\n",isMatch(argv[1],argv[2]));
}

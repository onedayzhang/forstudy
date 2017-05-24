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
		if(*p == *s ||(*p=='.'&&*s!='\0'))
		{
			return isMatch(s+1,p+1);
		}
	}
	else
	{
		#if 0
		if(*p!=*s&&*p!='.')
		{
			return isMatch(s,p+2);
		}
		else
		{
			return isMatch(s+1,p);
		}
		#endif
		while(*p==*s||(*p=='.'&&*s!='\0'))
		{
			if(isMatch(s,p+2))
			{
				return true;
			}
			s++;
		}
		return isMatch(s,p+2);
	}
	return false;
}

int main(int argc,char* argv[])
{
	printf("%d\n",isMatch(argv[1],argv[2]));
}

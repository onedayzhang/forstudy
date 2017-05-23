#include <stdio.h>

bool isMatch(char* s, char* p) {
    if(s==NULL||p==NULL)
	{
		return false;
	}
	if(*p='\0')
	{
		return (*s=='\0');
	}
	
}

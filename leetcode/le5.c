#include <stdio.h>
bool checkPalindrome(char *src, int start,int end)
{
	if(start==end)
	{
		return 0;
	}
	while(end>start)
	{
		if(src[start++]!=src[end--])
		{
			return 0;
		}
	}
	return 1;
}

char* longestPalindrome(char* s) {
    
}

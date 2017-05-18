#include <stdio.h>
#include <string.h>
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
    int lenth;
	int start,int end;
	int i;
	if(s==NULL)
	return NULL;
	start=0
	end=lenth=strlen(s);
	for(i=0;i<lenth;i++)
	{
		if(checkPalindrome(start))
	}

}

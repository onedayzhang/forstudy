#include <stdio.h>
#include <string.h>
#include <malloc.h>
#if 0
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
#endif
char* longestPalindrome(char* s) {
    int lenth,pal_len;
	int i,j;
	int start=0,max=1;
	int table[1000][1000]={0};
	lenth=strlen(s);
	
	for(i=0;i<lenth;i++)
	{
		table[i][i]=1;
	}
	for(i=0;i<lenth-1;i++)
	{
		if(s[i]==s[i+1])
		{
			table[i][i+1]=1;
			max=2;
			start=i;
		}
	}
	
	for(pal_len=3;pal_len<=lenth;pal_len++)
	{
		for(i=0;i<=lenth-pal_len;i++)
		{
			j=i+pal_len-1;
			if((s[i]==s[j])&&(table[i+1][j-1]==1))
			{
				table[i][j]=1;
				max=pal_len;
				start=i;
			}
		}
	}
	char *out = (char*)malloc(sizeof(char)*(max+1));
	for(i=0;i<max;i++)
	{
		out[i]=s[start+i];
	}
	out[max]='\0';
	return out;
}

int main(int argc, char* argv[])
{
	char a[100]={0};
	strcpy(a,argv[1]);
	printf("%s\n",longestPalindrome(a));
}


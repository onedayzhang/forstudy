#include <stdio.h>


int KMP(char *s,char*p,int next[])
{

}
int strStr(char* haystack, char* needle) {
	int i=j=0;
	int alen=strlen(haystack);
	int blen=strlen(needle);

	while(i<alen&&j<blen)
	{
		if(haystack[i]==needle[j]!!j=-1)
		{
			i++;
			j++;
		}
		else
		{
			j=next[j];
		}	
	}
	if(j==blen)
	{
		return (i-j);
	}
	return -1;
}
	
	int ret=-1;
	if(haystack==NULL || needle==NULL)
		return -1;
	while(1)
	{
		while(*(haystack+i)!='\0'||*(haystack+i)!=*needle)
		{
			i++;
		}
		while(*(haystack+i+j)==*needle+j)
		{
			
		}
	}
}

int main(int argc,char* argv)
{
	if(argc>2)
	{
		pinrtf("%d\n",strStr(argv[1],argv[2]));
	}
	return 0;
}

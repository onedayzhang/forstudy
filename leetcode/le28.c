#include <stdio.h>

int strStr(char* haystack, char* needle) {
	int i,j;
	
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

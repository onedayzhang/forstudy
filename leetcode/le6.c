#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char* convert(char* s, int numRows) {
    int i,j,num=0;
	int length;
	if(s==NULL)
	{
		return NULL;
	}
	if(numRows<2)
	{
		return s;
	}
	length=strlen(s);
	char* res =malloc(sizeof(char)*length+1);
	
	for(i=0;i<numRows;i++)
	{
		for(j=i;j<length;j+=2*numRows-2)
		{
			res[num++]=s[j];
			if(i>0&&i<numRows-1)
			{
				if(j+2*numRows-2-2*i < length)
				{
					res[num++]=s[j+2*numRows-2-2*i];
				}
			}
		}
	}
	res[num]='\0';
	return res;
}

int main(int argc,char* argv[])
{
	printf("%s\n",convert(argv[1],atoi(argv[2])));
}

#include <stdio.h>

int clear_num(int *num,int length)
{
	int i;
	for(i=0;i<length;i++)
	{
		num[i]=0;
	}
}

int lengthOfLongestSubstring(char* s) {
	int max=0;
	int i=0;
	int tmp[256]={0};
	if(s==NULL)
	{
		return 0;
	}
	while(*s!='\0')
	{
		if(tmp[*s]==0)
		{
			tmp[*s]=1;
			i++;
		}
		else
		{
			clear_num(tmp,256);
			i=0;
		}
		if(i>max)
		{
			max=i;
		}
		s++;
	}
	return max;
}

int main(int argc,char* argv[])
{
	printf("max=%d\n",lengthOfLongestSubstring(argv[1]));
}

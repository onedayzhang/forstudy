#include <stdio.h>
#include <string.h>

#if 0
int strStr(char* haystack, char* needle) {
	int i=j=0;
	int alen=strlen(haystack);
	int blen=strlen(needle);

	while(i<alen&&j<blen)
	{
		if(haystack[i]==needle[j]||j==-1)
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

int main(int argc,char* argv)
{
	if(argc>2)
	{
		pinrtf("%d\n",strStr(argv[1],argv[2]));
	}
	return 0;
}
#endif

int strStr(char* haystack, char* needle) {

	int i,j;
	char *a=haystack;
	char *b=needle;
	int alen=strlen(a);
	int blen=strlen(b);
    if(alen==0&&blen!=0)
        return -1;
    if(blen==0)
        return 0;
	int next[blen];
	getnext(b,next);

	i=0;j=0;
	while(i<alen &&j<blen)
	{
		if(a[i]==b[j]||j==-1)
		{
			i++;
			j++;
		}
		else
		{
		//	j=b-next[a[j]];
			j=next[j];
		}
	}
	if(j==blen)
		return (i-j);
	else
		return -1;

}
int getnext(char *n,int next[])
{
	int i,j;
	int len=strlen(n);
	next[0]=-1;
	i=0;
	j=-1;
	while(i<len-1)
	{
		if(n[i]==n[j]||j==-1)
		{
			i++;
			j++;
			next[i]=j;
		}
		else
		{
			j=next[j];
		}
	}
    return 0;
}
int main(int argc,char* argv[])
{
	if(argc>2)
	{
		printf("%d\n",strStr(argv[1],argv[2]));
	}
	return 0;
}

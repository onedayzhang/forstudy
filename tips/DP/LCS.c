#include <stdio.h>
#include <string.h>
#define N 20

int tmp[N][N]={0};

int max(int a,int b)
{
	if(a>b)
		return a;
	return b;
}

int LCS(char *ch1,char *ch2)
{
	int lenth1,lenth2;
	int i,j;
	lenth1=strlen(ch1);
	lenth2=strlen(ch2);
	for(i=0;i<=lenth1;i++)
	{
		for(j=0;j<=lenth2;j++)
		{
			tmp[i][j]=0;
		}
	}
	for(i=1;i<=lenth1;i++)
	{
		for(j=1;j<=lenth2;j++)
		{
			if(ch1[i]==ch2[j])
			{
				tmp[i][j]=tmp[i-1][j-1]+1;
			}
			else
			{
				tmp[i][j]=max(tmp[i-1][j],tmp[i][j-1]);
			}
		}
	}
	return tmp[lenth1][lenth2];
}

int main(int argc,char* argv[])
{
	printf("%d\n",LCS(argv[1],argv[2]));
	return 0;
}

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <malloc.h>

int backtracing(int n,int left,int right,char **res,int* returnSize,char *tmp,int start)
{
	int i;
	if(left+right==2*n)
	{
		for(i=0;i<2*n;i++)
		{
			res[*returnSize][i]=tmp[i];
		}
		
		res[*returnSize][i]='\0';
		printf("out= %s\n",res[*returnSize]);
		start=0;
		(*returnSize)++;
		return 0;
	}

	if(left<n)
	{
		tmp[start]='(';
		backtracing(n,left+1,right,res,returnSize,tmp,start+1);
	}
	
	if(right<left)
	{
		tmp[start]=')';
		backtracing(n,left,right+1,res,returnSize,tmp,start+1);
	}
	/*
	for(;start<2*n;start++)
	{
		if(start==0||left==right)
		{
			tmp=target[0];
		}
		else if(left==3||start==n-1)
		{
			tmp=target[1];
		}
		
	}*/
}


/**
 * Return an array of size *returnSize.
 * Note: The returned array must be malloced, assume caller calls free().
 */
char** generateParenthesis(int n, int* returnSize) {
	int i;
	int left=0,right=0;
	int start=0;
	char **res=malloc(sizeof(char*)*n*n);
	for(i=0;i<2*n*n;i++)
	{
		res[i]=malloc(sizeof(char)*n*n);
	}
	char tmp[1024]={0};
	*returnSize=0;
	backtracing(n,left,right,res,returnSize,tmp,start);
}

int main(int argc,char * argv[])
{
	int returnSize;
	char **res;
	int n=0;
	int i;
	if(argc<=1)
		return 0;
	n=atoi(argv[1]);
	res=generateParenthesis(n,&returnSize);
	printf("return %d\n",returnSize);

	for(i=0;i<returnSize;i++)
	{
		printf("%s ",res[i]);
	}
	printf("\n");
}

#include <stdio.h>
#include <malloc.h>

char *phone_num[]={ NULL,
					NULL,
					"abc",
					"def",
					"ghi",
					"jkl",
					"mno",
					"pqrs",
					"tuv",
					"wxyz",
					NULL
					};

int backtracing(char *a,char *digits,int *returnSize,int start,char **res)
{
	if(*digits=='\0')
	{
//		printf("start=%d\n",start);
		//push('\0');
		int i;
		for(i=0;i<start;i++)
		{
			res[*returnSize][i]=a[i];
		}
		res[*returnSize][i]='\0';
//		printf("out= %s\n",res[*returnSize]);
		(*returnSize)++;
		
		start=0;
		return 0;
	}
	
	for(int i=0;phone_num[*digits-'0']!=NULL&&*(phone_num[*digits-'0']+i)!='\0';i++)
	{
		//push(*phone_num[*digits-'0']);
//		res[*returnSize][start]=*phone_num[*digits-'0'];
		a[start]=*(phone_num[*digits-'0']+i);
		//printf("a[%d]=%c digits=%s\n",start,*phone_num[*digits-'0'+i],digits);
		start++;
		digits++;		
	//	printf("digits=%s\n",digits);
//		if(start!=2)
//		{			
//			printf("*phone_num[*digits-'0']=%c\n",*phone_num[*digits-'0'+i]);
//		}
		backtracing(a,digits,returnSize,start,res);
		start--;
		digits--;
	}
	return 0;
}
/**
* Return an array of size *returnSize.
* Note: The returned array must be malloced, assume caller calls free().
*/
char** letterCombinations(char* digits, int* returnSize) {

	char **res=malloc(sizeof(char*)*4*4);
	for(int i=0;i<4*4;i++)
	{
		res[i]=malloc(3*sizeof(char));
	}
	*returnSize=0;
	int start=0;
	char a[2];
	backtracing(a,digits,returnSize,start,res);
	return res;
}

int main(int argc,char *argv[])
{
	int returnsize;
	char**res;
	if(argv[1]!=NULL)
	{
		res=letterCombinations(argv[1],&returnsize);
	}
	printf("return %d\n",returnsize);
	#if 0
	for(int i=0;i<returnsize;i++)
	{
		printf("%s",res[i]);
	}
	#endif
}


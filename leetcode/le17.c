#include <stdio.h>
#include <malloc.h>
int backtracing(char *digits,char**phone_num,int *returnSize,int start,char **res)
{
	if(*digits=='\0')
	{
		//push('\0');
		res[*returnSize][start]='\0';
		(*returnSize)++;
		start=0;
		return 0;
	}
	for(;phone_num[*digits-'0']!=NULL&&*phone_num[*digits-'0']!='\0';phone_num[*digits-'0']++)
	{
		//push(*phone_num[*digits-'0']);
		res[*returnSize][start]=*phone_num[*digits-'0'];
		start++;
		backtracing(digits+1,phone_num,returnSize,start,res);
	}
}
/**
* Return an array of size *returnSize.
* Note: The returned array must be malloced, assume caller calls free().
*/
char** letterCombinations(char* digits, int* returnSize) {

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
	char **res=malloc(sizeof(char)*5*4*4);
	*returnSize=0;
	int start=0;
	backtracing(digits,phone_num,returnSize,start,res);
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
	for(int i=0;i<returnsize;i++)
	{
		printf("%s",res[i]);
	}
}


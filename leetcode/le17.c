
int backtracing(char *digits,char**phone_num,int *returnSize)
{
	if(*digits=='\0')
	{
		push('\0');
		(*returnSize)++;
		return 0;
	}
	for(;phone_num[*digits-'0']!=NULL&&*phone_num[*digits-'0']!='\0';phone_num[*digits-'0']++)
	{
		push(*phone_num[*digits-'0']);
		backtracing(digits++,phone_num,)
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
	
}

int main()
{
	
}

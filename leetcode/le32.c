#include <stdio.h>
#include <string.h>
int longestValidParentheses(char* s) {
	int max=0;
	int i,j;
	int len=strlen(s);
	int left,right;

	for(j=0;j<len-max;j++)
	{
		left=0;
		right=0;
		for(i=j;i<len;i++)
		{
			if(s[i]=='(') left++;
			else right++;
			if(left<right) break;
			if(left==right&&(left+right>max))
				max=left+right;
		}
	}
	return max;
}

int main(int argc,char* argv[])
{
	printf("%d\n",longestValidParentheses(argv[1]));
	return 0;
}

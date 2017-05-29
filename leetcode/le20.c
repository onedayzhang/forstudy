#include <stdio.h>
#include <stdbool.h>


char num[1024];
int position;

int create_stack()
{
//	num[1024]={0};
	position=0;
}
int stack_push(char src)
{
	num[position]=src;
	position++;	
}
char stack_pop()
{
	char src='0';
	if(position>=1)
	{
		src=num[position-1];
		num[position]=0;
		position--;
	}
	return src;
}
bool stack_isempty()
{
	return position==0;
}

bool isValid(char* s) {
	if(s==NULL)
	return false;
	create_stack();
	while(*s!='\0')
	{
		if(*s=='('||*s=='['||*s=='{')
		{
			stack_push(*s);
		}
		if(*s==')')
		{
			if(stack_pop()!='(')
			return false;
		}
		if(*s==']')
		{
			if(stack_pop()!='[')
			return false;
		}
		if(*s=='}')
		{
			if(stack_pop()!='{')
			return false;
		}
		s++;
	}
	if(stack_isempty()==true)
	return true;
	else
	return false;
}

int main(int argc ,char* argv[])
{
	printf("%d\n",isValid(argv[1]));
	return 0;
}

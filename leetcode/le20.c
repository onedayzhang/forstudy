
bool isValid(char* s) {
	if(s==NULL)
	return false;
	create_stack();
	while(s!='\0')
	{
		if(*s=='('||*s=='['||*s='{')
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
	if(stack_empty()==true)
	return true
}

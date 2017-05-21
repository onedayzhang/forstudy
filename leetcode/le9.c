
int reverse(int x) {
    long long int sum=0;
	while(x!=0)
	{
		sum=sum*10+x%10;
		x=x/10;
	}
	return (sum>INT_MAX ||sum<INT_MIN)? 0:sum;
}
bool isPalindrome(int x) {
	if(x<0)
	return 0;
    if((reverse(x))==x)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

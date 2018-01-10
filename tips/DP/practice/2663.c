// http://poj.org/problem?id=2663

int calnum(int n)
{
	int pre2=0,pre1=0;
	int i=1,sum=0;
	if(n==0)
		return 1;
	if(n==2)
		return 3;
	if(n%2!=0)
		return 0;
	pre2=0;pre1=3;
	for(i=2;2(i-1)<n;i++)
	{
		sum=4*pre1-1*pre2;
		pre2=pre1;
		pre1=sum;
	}
	return sum;
}



int main()
{
	printf("%d\n",calnum(7));
}

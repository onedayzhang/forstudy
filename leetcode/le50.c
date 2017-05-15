//Implement pow(x, n).

double myPow(double x, int n) {
	if(n<0)
	{
		if(n==INT_MIN)
		{
			return 1/x * 1/myPow(x,-n-1);
		}
		return 1/myPow(x,-n);
	}
	if(n==0)
	{
		return 1;
	}
	if(n==1)
	{
		return x;
	}
	if(n%2==0)
	{
		return myPow(x,n/2)*myPow(x,n/2);
	}
	else
	{
		return x*myPow(x,(n-1)/2)*myPow(x,(n-1)/2);
	}
}


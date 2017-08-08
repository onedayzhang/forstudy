#include <stdio.h>

int main(int argc,char argv)
{
	int i,j;
	int len=0;
	int nums[8]={53,55,32,23,54,31,65,26};
	int tmp[8];
	for(i=0;i<8;i++)
	{
		tmp[i]=1;
		for(j=0;j<i;j++)
		{
			if((nums[j]<=nums[i])&&tmp[i]<tmp[j]+1)
			{
				tmp[i]=tmp[j]+1;
			}
		}
		if(tmp[i]>len)
		{
			len=tmp[i];
		}
	}
	printf("len=%d\n",len);
}

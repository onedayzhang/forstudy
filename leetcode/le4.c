#include <stdio.h>

int min(int a, int b)
{
	return a>b?b:a;
}
int kth(int *a,int m,int *b,int n,int k)
{
	if(m<n) return kth(b,n,a,m,k);
	if(n==0) return a[k-1];
	if(k==1) return min(a[0],b[0]);
	int i=min(n,k/2);
	int j=k-i;
	if(b[i-1]>a[j-1]) return kth(a+j,m-j,b,n,k-j);
	else return kth(a,m,b+i,n-i,k-i);
}
double  findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size) {
	if((nums1Size+nums2Size)%2==1)
	return kth(nums1,nums1Size,nums2,nums2Size,(nums1Size+nums2Size)/2+1);
	else
	return ((double)kth(nums1,nums1Size,nums2,nums2Size,(nums1Size+nums2Size)/2)+(double)kth(nums1,nums1Size,nums2,nums2Size,(nums1Size+nums2Size)/2+1))/2;
}

int main()
{
	int a[8]={1,5,8,9,12,34,56,78};
	int b[3]={2,3,4};
	printf("%f\n",findMedianSortedArrays(a,8,b,3));
}

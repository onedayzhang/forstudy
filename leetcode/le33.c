#include <stdio.h>

int search(int* nums, int numsSize, int target) {
	int start=0,end=numsSize-1;
	int mid;
	while(start<=end)
	{
		mid=(start+end)/2;
		if(target==nums[mid]) return mid;
		if(target<nums[mid])
		{
			if(nums[mid]>nums[start]||target<=nums[start]) end=mid-1;
			else start=mid+1;
		}
		else
		{
			if(nums[mid]>=nums[start]||target<nums[start]) start=mid+1;
			else end=mid-1;
		}
	}
	return -1;    
}

int main(int argc,char *argv[])
{
	int nums[]={5,1,3};
	if(argc<2)
	{
		printf("plz input\n");
		return 0;
	}
	printf("%d\n",search(nums,3,atoi(argv[1])));
	return 0;
}

/*
int search(int* nums, int numsSize, int target) {
    int l = 0, r = numsSize - 1;
    while (l <= r) {
        int mid = (l & r) + ((l ^ r) >> 1);
        if (nums[mid] == target) return mid; 
        if (nums[mid] > target) {
            if (nums[l] <= target || nums[mid] < nums[l]) r = mid - 1;
            else l = mid + 1;
        }
        else {
            if (nums[l] > target || nums[mid] >= nums[l]) l = mid + 1;
            else r = mid - 1;
        }
    }
    return -1;
}
*/

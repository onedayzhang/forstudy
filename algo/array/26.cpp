class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
		if(nums.size()<2)
		return nums.size();
		int low=0,high=0;
		while(high<nums.size())
		{
			if(nums[low]==nums[high])
			{
				high++;
				if(high==nums.size())
					low++;
			}
			else
			{
				if(high-low>1)
				{
					nums[low+1]=nums[high];
				}
				low++;
			}
		}
		return low;
	}
};

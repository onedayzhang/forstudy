class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
		if(nums.size()<1)
			return nums.size();
		int i=0;int j=1
		while(i<nums.size())
		{
			if(nums[i]==val)
			{
				if(j<nums.size())
				{
					nums[i]=nums[j];
				}
				else
				{
					break;
				}

			}
			else
			{
				i++;
			}
		}
		return i;
	}
};

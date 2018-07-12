class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
		if(nums.size()<1)
			return nums.size();
		int i=0;int j=nums.size()-1;
		while(i<=j)
		{
			if(nums[i]==val)
			{
				nums[i]=nums[j];
				j--;
			}
			else
			{
				i++;
			}
		}
		return i;
	}
};

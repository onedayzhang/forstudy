class Solution {
public:
    int rob(vector<int>& nums) {
		if(nums.size()==0)
			return 0;
		if(nums.size()==1)
			return nums[0];
		if(nums.size()==2)
			return max(nums[0],nums[1]);
		vector<int> dp(nums.size());
		int i;
		dp[0]=nums[0];
		dp[1]=max(nums[0],nums[1]);
		for(i=2;i<nums.size();i++)
		{
			dp[i]=max(dp[i-1],dp[i-2]+nums[i]);
		}
		return dp[i-1];
    }
};

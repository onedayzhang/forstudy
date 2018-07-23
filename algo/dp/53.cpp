class Solution {
public:
    int maxSubArray(vector<int>& nums) {
		int sum=0,max;
		if(nums.size()==0)
			return 0;
		max=nums[0];
		for(int i=0;i<nums.size();i++)
		{
			sum+=nums[i];
			if(sum>max)
				max=sum;
			if(sum<0)
				sum=0;
		}
		return max;
    }
};
//DP
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();
		vector<int> dp(n);
		dp[0]=nums[0];
        int result=nums[0];
        for(int i=1;i<n;i++)
		{
			dp[i]=nums[i]+(dp[i-1]>0? dp[i-1]:0);
			result=max(result,dp[i]);
		}
		return result;
    }
};

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
		map<int,int> mymap;
		vector<int> result;
		for(int i=0;i<nums.size();i++)
		{
			int findnum=target-nums[i];
			if(mymap.find(findnum)!=mymap.end())
			{
				result.push_back(mymap[findnum]);
				result.push_back(i);
				return result;
			}
			mymap[nums[i]]=i;
		}
    }
};
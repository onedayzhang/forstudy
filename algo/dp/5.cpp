#include <iostream>
using namespace std;

class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.size();
	    int dp[n+1][n+1]={0};
        int low=0,len=0;
        for(int i=n-1;i>=0;i--)
		{
			for(int j=i;j<n;j++)
			{
				dp[i][j]=s[i]==s[j]&&(j-i<3||dp[i+1][j-1]);
			    if(dp[i][j]&&(j-i+1)>len)
			    {
				    low=i;
				    len=j-i+1;
			    }
			}
		}
        return s.substr(low,len);
    }
};

int main()
{
	Solution test;
	string res;
	cout<<test.longestPalindrome("babad")<<endl;
	return 0;
}

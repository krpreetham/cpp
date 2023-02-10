#include <bits/stdc++.h>

using namespace std;

int Count(int N, int L, int R)
{
	vector<vector<int> > dp(N,vector<int>(R-L+1, 0));
	int ans = 0;
	for (int i=0;i<N;i++) 
	{
		dp[i][0]=1;
	}
	for(int i=1;i<dp[0].size();i++)
	{
		dp[0][i]=dp[0][i-1]+1;
	}
	ans=dp[0][R-L];
	for(int i=1;i<N;i++) 
	{
		for(int j=1;j<dp[0].size();j++) 
		{
			dp[i][j]=dp[i-1][j]+dp[i][j-1];
		}
		ans+=dp[i][R-L];
	}
	return ans;
}

int main()
{
	int N=2;
	int L=6;
	int R=7;
	cout<<Count(N,L,R)<<endl;
	return 0;
}


#include<bits/stdc++.h>
using namespace std;
int dp[1005];
int mod = 10007;
int main()
{
	int n; cin>>n;
	dp[1] = 1; dp[2] = 2;
	for(int i=3; i<=n; i++)
	{
		dp[i] = (dp[i-1] + 2*dp[i-2]) % mod;
	}
	cout<<dp[n];
}

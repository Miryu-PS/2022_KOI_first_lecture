#include<bits/stdc++.h>
using namespace std;
int dp[20];
int main()
{
	int T; cin>>T;
	dp[1] = 1; dp[2] = 2; dp[3] = 4;
	for(int i=4; i<20; i++) dp[i] = dp[i-1]+dp[i-2]+dp[i-3];
	while(T--)
	{
		int n; cin>>n;
		cout<<dp[n]<<'\n';
	}
}

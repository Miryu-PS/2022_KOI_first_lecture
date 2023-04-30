#include<bits/stdc++.h>
using namespace std;
int MOD = 1e9+7;
int dp[1005][1005];
string s[1005];
int main()
{
	int N; cin>>N;
	for(int i=0; i<N; i++) cin>>s[i];
	for(int i=0; i<N; i++) for(int j=0; j<N; j++)
	{
		dp[i][j] = 0;
		if(s[i][j] != '.') continue;
		if(i==0 && j==0) dp[i][j] = 1;
		if(i>0 && s[i-1][j] == '.') dp[i][j] += dp[i-1][j];
		if(j>0 && s[i][j-1] == '.') dp[i][j] += dp[i][j-1];
		dp[i][j] %= MOD;
	}
	cout<<dp[N-1][N-1];
}

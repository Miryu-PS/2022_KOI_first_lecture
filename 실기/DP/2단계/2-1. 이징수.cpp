#include<bits/stdc++.h>
using namespace std;
int main()
{
	// 1로 시작하는 이징수들을 보면
	// 10(?) 의 형태를 가진다(?는 0이나 1 중 무엇으로 시작해도 상관없는 이징수)
	// 10 다음에 0 이 오면 100(?)
	// 10 다음에 1이 오면 1010(?) 가 된다
	//반복되는 것이 10(?)가 아니라 (?)이므로
	//(?)의 관계식을 구하자
	long long dp[100];
	int N; cin>>N;
	dp[1] = 2; dp[2] = 3;
	for(int i=3; i<=N-2; i++) dp[i]=dp[i-1]+dp[i-2];
	cout<<dp[N-2];
	
}

#include <bits/stdc++.h>
using namespace std;
int x,n;
int dp[1000001]; // dp[i]는 i원을 만들기 위해 필요한 돈의 액수

int main(void) {
    cin>>x>>n;
    int coin[x]; 
    for(int i=0; i<x; i++) cin>>coin[i];
	dp[0]=0;
	for (int i=1; i<=n; i++) {
		dp[i] = 1000001; // 초기값 큰 값 설정
        for (int j: coin) { // j원짜리 동전  
			if (i-j>= 0) 
			{
				dp[i] = min(dp[i], dp[i-j] + 1); // i원을 (j원 1개) + (i - j원을 만드는 동전의 최소개수) 로 만드는 방법
			}
        }
    }
	if(dp[n] == 1000001) cout<<-1;
	else cout<<dp[n];
}

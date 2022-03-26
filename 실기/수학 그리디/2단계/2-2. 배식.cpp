#include<bits/stdc++.h>
using namespace std;
int p[1005];
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(0);
	int n; cin>>n;
	for(int i=0; i<n; i++) cin>>p[i];
	sort(p,p+n);
	// 배식시간이 짧은 순서대로 먼저
	// 결과값은 p[0]*n + p[1]*(n-1) + .... p[n-1]*1
	int ans = 0;
	//왜 int로 선언해도 될까?
	// 1000짜리 1000명이 있을 때에도
	// 1명의 대기시간 최대 100만 * 1000명 = 10억
	// int 범위 이내. 체크 안하면 안됨
	for(int i=0; i<n; i++)
	{
		ans += (n-i) * p[i];
	}
	cout<<ans;
}
	

#include<bits/stdc++.h>
using namespace std;
int cnt[4]; // cnt[i] = 초기 위치가 i번인 컵에 돌이 있었을 경우, 베시가 답을 맞춘 횟수
int where[4]; // 현재 x번 컵이 초기 위치가 몇 번이었는지
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(0);
	int n; cin>>n;
	where[1] = 1; where[2] = 2; where[3] = 3;
	for(int i=0; i<n; i++)
	{
		int a,b,c; cin>>a>>b>>c;
		swap(where[a], where[b]);
		cnt[where[c]]++;
	}
	cout<<max({cnt[1], cnt[2], cnt[3]});
}

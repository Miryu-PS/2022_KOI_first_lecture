#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(0); 
	int N; cin>>N;
	int ans = INT_MAX;
	for(int i=0; i*5 <= N; i++) // 5병 상자 개수 i에 대해 전체탐색
	{
		int last = N - i*5;
		if(last % 3 == 0)
		{
			ans = min(ans, i + (last/3));
			// 5병짜리 i개, 3병짜리 (last/3)개로 총 N개
		}
	}
	if(ans == INT_MAX) ans = -1; // 발견하지 못했으면 -1 출력
	cout<<ans;
}


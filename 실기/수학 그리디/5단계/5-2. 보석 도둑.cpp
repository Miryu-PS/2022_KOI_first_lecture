#include<bits/stdc++.h>
using namespace std;
using pii = pair<int,int>;
using ll = long long;
// 가방의 제한 무게가 낮은 순으로 보자.
// 제한 무게 내에서 최대한의 가치를 지닌 보석을 고르면 된다.
pii arr[600060];
priority_queue<int> pq;
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(0); 
	/*
	pair를 이용하여 가방들과 보석들을 통째로 정렬한다.
	보석은 (무게, -가치)
	가방은 (무게, 1)
	보석과 가방들을 통째로 무게순으로 정렬하고 순서대로 본다.
	*/
	int n,k; cin>>n>>k;
	for(int i=0; i<n; i++){
		int m,v; cin>>m>>v;
		arr[i] = {m, -v};
	}
	for(int i=0; i<k; i++){
		int c; cin>>c;
		arr[n+i] = {c,1};
	}
	sort(arr, arr+n+k); // 무게 순으로, 무게가 같다면 보석->가방 순서로 나오도록
	ll ans = 0;
	for(int i=0; i<n+k; i++)
	{
		if(arr[i].second==1) // 가방이라면
		{
			if(!pq.empty()) // 고를 수 있는 보석이 있을 때
			{
				ans += pq.top(); // 가장 비싼 보석을 고른다.
				pq.pop();
			}
		}
		else // 보석이라면
		{
			pq.push(-arr[i].second); // 고를 수 있는 보석 목록에 추가한다.
		}
	}
	cout<<ans;
}
	
	

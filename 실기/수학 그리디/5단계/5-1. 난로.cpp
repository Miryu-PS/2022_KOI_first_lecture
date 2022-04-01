#include<bits/stdc++.h>
using namespace std;
int main()
{
	/*
	끌 수 있는 가장 긴 (K-1)개의 시간을 골라서 끈다.
	*/
	ios_base::sync_with_stdio(false); cin.tie(0);
	int n,k,x; cin>>n>>k>>x;
	priority_queue<int> pq; // 최대값 우선순위큐
	int time = x, firsttime = x;
	for(int i=2; i<=n; i++)
	{
		cin>>x;
		pq.push(x-time-1); // time과 x 사이에는 x-time-1 만큼의 끌 수 있는 시간이 있다.
		time = x; // time 갱신
	}
	int ans = x+1 - firsttime; // 만약 불을 한 번도 끄지 않는다면 firsttime ~ (x+1) 의 시간동안 계속 켜야한다.
	for(int i=1; i<k; i++) // 가장 길게 불을 끌 수 있는 K-1번의 시간을 구해서 뺸다
	{
		ans -= pq.top();
		pq.pop();
	}
	cout<<ans;
}
	

#include<bits/stdc++.h>
using namespace std;
using pii = pair<int,int>;
pii arr[100005];
int dist(int x, int y) // arr[x]랑 arr[y] 사이의 거리
{
	return abs(arr[x].first-arr[y].first) + abs(arr[x].second-arr[y].second);
}
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(0);
	int n; cin>>n;
	for(int i=1; i<=n; i++) cin>>arr[i].first>>arr[i].second;
	int totaldist = 0, ecomax = 0;
	//totaldist = 전체거리 ecomax = 내가 특정 지점 하나를 뛰어넘어서 절약할 수 있는 이동거리 중 최대
	for(int i=2; i<=n; i++)
	{
		totaldist += dist(i-1, i);
		if(i!=n) 
		{
			int ecoi = (dist(i-1,i) + dist(i,i+1)) - dist(i-1, i+1);// i번 지점을 뛰어넘었을 때 절약할 수 있는 거리
			ecomax = max(ecomax, ecoi;
	}
	cout<<totaldist-ecomax;
}

#include<bits/stdc++.h>
using namespace std;
using pii = pair<int,int>;
using ll = long long;
pii p[100005]; // p[i].first는 위치, p[i].second는 사람수
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(0);
	int n; cin>>n;
	ll total = 0; // 총 인구수, 최악의 경우 int 벗어남
	for(int i=0; i<n; i++) 
	{
		cin>>p[i].first>>p[i].second;
		total += p[i].second;
	}
	ll goal = (total+1)/2;
	// 5명이면 3명째를 찾고 6명이어도 3명째를 찾는다.
	// 후보는 보통 (x-1)/2 or x/2 or (x+1)/2
	// 이 중 규칙에 맞는 것을 고른다.
	
	sort(p,p+n); //  위치(first) 순으로 정렬
	ll tmp = 0;
	for(int i=0; i<n; i++)
	{
		tmp+=p[i].second;
		if(tmp >= goal)
		{
			cout<<p[i].first;
			return 0;
		}
	}
}
	

#include<bits/stdc++.h>
using namespace std;
int p[200005];
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(0);
	int n; cin>>n;
	for(int i=0; i<n; i++) cin>>p[i];
	sort(p,p+n);
	cout<<p[(n-1)/2];
	// 무조건 중앙값이 답이 된다.
	// why?
	// 왼쪽에서부터 x번째 집에서 x+1번째 집 방향으로 기지국을 1만큼 옮길 때, (1~x)번째 집에서는 1만큼 멀어지고, (x+1 ~ n)번째 집에서는 1만큼 가까워지므로 총 거리가 +(2*x - n) 만큼 변한다. 이 값이 음수에서 양수로 바뀌는 순간이 최소값. x = n/2
}
	

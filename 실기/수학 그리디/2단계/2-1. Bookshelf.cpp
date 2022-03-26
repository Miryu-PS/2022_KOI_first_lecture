#include<bits/stdc++.h>
using namespace std;
int h[20002];
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(0);
	int n,b; cin>>n>>b;
	for(int i=0; i<n; i++) cin>>h[i];
	sort(h, h+n, greater<>()); // 오름차순 정렬
	// sort(h, h+n, cmp) -> 위에서 비교함수 cmp 정의
	// sort(h, h+n, [](int x, int y){return x>y;}) 
	// 언제나 높이가 높은 책장부터 쓰는 것이 좋다.(그리디)
	int sum=0;
	for(int i=0; i<n; i++)
	{
		sum += h[i];
		if(sum >= b) 
		{
			cout<<i+1; return 0;
		}
	}
}

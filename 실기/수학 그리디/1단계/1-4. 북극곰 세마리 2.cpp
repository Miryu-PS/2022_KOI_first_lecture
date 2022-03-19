#include<bits/stdc++.h>
using namespace std;
int main()
{
	// 최소: a b c가 있을 때 언제나 2번 이하로 못 움직이게 만들 수 있다. a b c -> a b a+2 -> a a+1 a+2처럼
	// 최대: a~b 나 b~c 중 큰 곳에 계속 인접하게 집어넣는 방법이 있다.
	ios_base::sync_with_stdio(false); cin.tie(0);
	int a,b,c; cin>>a>>b>>c;
	if(a+2==c) cout<<0;
	else if(b-a==2 || c-b==2) cout<<1;
	else cout<<2;
	
	cout<<'\n';
	
	cout<<max(b-a-1, c-b-1);
}

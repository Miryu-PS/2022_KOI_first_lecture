#include<bits/stdc++.h>
using namespace std;
int main()
{
	// 가능한 한 큰 시간의 버튼을 최대한 누른다.
	ios_base::sync_with_stdio(false); cin.tie(0);
	int t; cin>>t;
	int a = t/300; t%=300;
	int b = t/60; t%=60;
	int c = t/10; t%=10;
	if(t==0) cout<<a<<" "<<b<<" "<<c;
	else cout<<-1;
}

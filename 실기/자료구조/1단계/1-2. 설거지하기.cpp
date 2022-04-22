#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(0);
	int n; cin>>n;
	stack<int> A, B, C;
	for(int i=n; i>=1; i--) A.push(i); // A에 n부터 1까지 거꾸로 넣어 pop하는 순서가 1~n이 되도록
	while(!A.empty() || !B.empty()) // A와 B가 둘 다 비면 종료
	{
		int p,q; cin>>p>>q;
		if(p==1) {while(q--) {B.push(A.top()); A.pop();}} // q번 A에서 B로
		else if(p==2) {while(q--) {C.push(B.top()); B.pop();}} // q번 B에서 C로
	}
	while(!C.empty())
	{
		cout<<C.top()<<"\n"; C.pop();
	}
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(0);
	int n; cin>>n;
	stack<int> A, B, C;
	for(int i=n; i>=1; i--) A.push(i); // A�� n���� 1���� �Ųٷ� �־� pop�ϴ� ������ 1~n�� �ǵ���
	while(!A.empty() || !B.empty()) // A�� B�� �� �� ��� ����
	{
		int p,q; cin>>p>>q;
		if(p==1) {while(q--) {B.push(A.top()); A.pop();}} // q�� A���� B��
		else if(p==2) {while(q--) {C.push(B.top()); B.pop();}} // q�� B���� C��
	}
	while(!C.empty())
	{
		cout<<C.top()<<"\n"; C.pop();
	}
}
